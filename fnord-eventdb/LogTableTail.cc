/**
 * This file is part of the "libfnord" project
 *   Copyright (c) 2015 Paul Asmuth
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#include <fnord-base/logging.h>
#include <fnord-eventdb/LogTableTail.h>

namespace fnord {
namespace eventdb {

void LogTableTailCursor::encode(util::BinaryMessageWriter* writer) const {
  writer->appendVarUInt(offsets.size());
  for (const auto& o : offsets) {
    writer->appendVarUInt(o.replica_id.size());
    writer->append(o.replica_id.data(), o.replica_id.size());
    writer->appendVarUInt(o.consumed_offset);
  }
}

void LogTableTailCursor::decode(util::BinaryMessageReader* reader) {
  auto n = reader->readVarUInt();
  for (int i = 0; i < n; ++i) {
    auto rid_len = reader->readVarUInt();
    String replica_id((char *) reader->read(rid_len), rid_len);
    auto consumed_offset = reader->readVarUInt();

    offsets.emplace_back(LogTableTailOffset {
      .replica_id = replica_id,
      .consumed_offset = consumed_offset
    });
  }
}

LogTableTail::LogTableTail(
    RefPtr<TableReader> reader) :
    reader_(reader) {
  auto snap = reader_->getSnapshot();

  for (const auto& c : snap->head->chunks) {
    const auto& replica = c.replica_id;
    auto off = offsets_.find(replica);

    if (off == offsets_.end()) {
      offsets_[replica] = c.start_sequence;
    } else if (c.start_sequence < off->second) {
      off->second = c.start_sequence;
    }
  }
}

LogTableTail::LogTableTail(
    RefPtr<TableReader> reader,
    LogTableTailCursor cursor) :
    reader_(reader) {
  for (const auto& o : cursor.offsets) {
    offsets_.emplace(o.replica_id, o.consumed_offset);
  }
}

bool LogTableTail::fetchNext(
    Function<bool (const msg::MessageObject& record)> fn,
    size_t limit /* = -1 */) {
  auto snap = reader_->getSnapshot();

  for (const auto& c : snap->head->chunks) {
    auto cbegin = c.start_sequence;
    auto cend = cbegin + c.num_records;
    auto cur = offsets_[c.replica_id];

    if (cbegin <= cur && cend > cur) {
      auto roff = cur - cbegin;
      auto rlen = c.num_records - roff;

      if (limit != size_t(-1) && rlen > limit) {
        rlen = limit;
      }

      auto actual_rlen = reader_->fetchRecords(c.replica_id, cur, rlen, fn);
      offsets_[c.replica_id] += actual_rlen;
      return true;
    }
  }

  return false;
}

LogTableTailCursor LogTableTail::getCursor() const {
  LogTableTailCursor cursor;

  for (const auto& o : offsets_) {
    cursor.offsets.emplace_back(LogTableTailOffset {
      .replica_id = o.first,
      .consumed_offset = o.second
    });
  }

  return cursor;
}

} // namespace eventdb
} // namespace fnord
