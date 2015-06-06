// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TopicCursor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "TopicCursor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace fnord {
namespace feeds {

namespace {

const ::google::protobuf::Descriptor* TopicCursorOffset_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TopicCursorOffset_reflection_ = NULL;
const ::google::protobuf::Descriptor* TopicCursor_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TopicCursor_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_TopicCursor_2eproto() {
  protobuf_AddDesc_TopicCursor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "TopicCursor.proto");
  GOOGLE_CHECK(file != NULL);
  TopicCursorOffset_descriptor_ = file->message_type(0);
  static const int TopicCursorOffset_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursorOffset, next_offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursorOffset, host_id_),
  };
  TopicCursorOffset_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TopicCursorOffset_descriptor_,
      TopicCursorOffset::default_instance_,
      TopicCursorOffset_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursorOffset, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursorOffset, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TopicCursorOffset));
  TopicCursor_descriptor_ = file->message_type(1);
  static const int TopicCursor_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursor, topic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursor, offsets_),
  };
  TopicCursor_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TopicCursor_descriptor_,
      TopicCursor::default_instance_,
      TopicCursor_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursor, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TopicCursor, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TopicCursor));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_TopicCursor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TopicCursorOffset_descriptor_, &TopicCursorOffset::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TopicCursor_descriptor_, &TopicCursor::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_TopicCursor_2eproto() {
  delete TopicCursorOffset::default_instance_;
  delete TopicCursorOffset_reflection_;
  delete TopicCursor::default_instance_;
  delete TopicCursor_reflection_;
}

void protobuf_AddDesc_TopicCursor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021TopicCursor.proto\022\013fnord.feeds\"9\n\021Topi"
    "cCursorOffset\022\023\n\013next_offset\030\005 \002(\004\022\017\n\007ho"
    "st_id\030\004 \002(\t\"M\n\013TopicCursor\022\r\n\005topic\030\001 \002("
    "\t\022/\n\007offsets\030\002 \003(\0132\036.fnord.feeds.TopicCu"
    "rsorOffset", 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "TopicCursor.proto", &protobuf_RegisterTypes);
  TopicCursorOffset::default_instance_ = new TopicCursorOffset();
  TopicCursor::default_instance_ = new TopicCursor();
  TopicCursorOffset::default_instance_->InitAsDefaultInstance();
  TopicCursor::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_TopicCursor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_TopicCursor_2eproto {
  StaticDescriptorInitializer_TopicCursor_2eproto() {
    protobuf_AddDesc_TopicCursor_2eproto();
  }
} static_descriptor_initializer_TopicCursor_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TopicCursorOffset::kNextOffsetFieldNumber;
const int TopicCursorOffset::kHostIdFieldNumber;
#endif  // !_MSC_VER

TopicCursorOffset::TopicCursorOffset()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fnord.feeds.TopicCursorOffset)
}

void TopicCursorOffset::InitAsDefaultInstance() {
}

TopicCursorOffset::TopicCursorOffset(const TopicCursorOffset& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fnord.feeds.TopicCursorOffset)
}

void TopicCursorOffset::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  next_offset_ = GOOGLE_ULONGLONG(0);
  host_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TopicCursorOffset::~TopicCursorOffset() {
  // @@protoc_insertion_point(destructor:fnord.feeds.TopicCursorOffset)
  SharedDtor();
}

void TopicCursorOffset::SharedDtor() {
  if (host_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete host_id_;
  }
  if (this != default_instance_) {
  }
}

void TopicCursorOffset::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TopicCursorOffset::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TopicCursorOffset_descriptor_;
}

const TopicCursorOffset& TopicCursorOffset::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TopicCursor_2eproto();
  return *default_instance_;
}

TopicCursorOffset* TopicCursorOffset::default_instance_ = NULL;

TopicCursorOffset* TopicCursorOffset::New() const {
  return new TopicCursorOffset;
}

void TopicCursorOffset::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    next_offset_ = GOOGLE_ULONGLONG(0);
    if (has_host_id()) {
      if (host_id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        host_id_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TopicCursorOffset::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fnord.feeds.TopicCursorOffset)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string host_id = 4;
      case 4: {
        if (tag == 34) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_host_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->host_id().data(), this->host_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "host_id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_next_offset;
        break;
      }

      // required uint64 next_offset = 5;
      case 5: {
        if (tag == 40) {
         parse_next_offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &next_offset_)));
          set_has_next_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fnord.feeds.TopicCursorOffset)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fnord.feeds.TopicCursorOffset)
  return false;
#undef DO_
}

void TopicCursorOffset::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fnord.feeds.TopicCursorOffset)
  // required string host_id = 4;
  if (has_host_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->host_id().data(), this->host_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "host_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->host_id(), output);
  }

  // required uint64 next_offset = 5;
  if (has_next_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->next_offset(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:fnord.feeds.TopicCursorOffset)
}

::google::protobuf::uint8* TopicCursorOffset::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fnord.feeds.TopicCursorOffset)
  // required string host_id = 4;
  if (has_host_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->host_id().data(), this->host_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "host_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->host_id(), target);
  }

  // required uint64 next_offset = 5;
  if (has_next_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->next_offset(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fnord.feeds.TopicCursorOffset)
  return target;
}

int TopicCursorOffset::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 next_offset = 5;
    if (has_next_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->next_offset());
    }

    // required string host_id = 4;
    if (has_host_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->host_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TopicCursorOffset::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TopicCursorOffset* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TopicCursorOffset*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TopicCursorOffset::MergeFrom(const TopicCursorOffset& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_next_offset()) {
      set_next_offset(from.next_offset());
    }
    if (from.has_host_id()) {
      set_host_id(from.host_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TopicCursorOffset::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TopicCursorOffset::CopyFrom(const TopicCursorOffset& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TopicCursorOffset::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void TopicCursorOffset::Swap(TopicCursorOffset* other) {
  if (other != this) {
    std::swap(next_offset_, other->next_offset_);
    std::swap(host_id_, other->host_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TopicCursorOffset::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TopicCursorOffset_descriptor_;
  metadata.reflection = TopicCursorOffset_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int TopicCursor::kTopicFieldNumber;
const int TopicCursor::kOffsetsFieldNumber;
#endif  // !_MSC_VER

TopicCursor::TopicCursor()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:fnord.feeds.TopicCursor)
}

void TopicCursor::InitAsDefaultInstance() {
}

TopicCursor::TopicCursor(const TopicCursor& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:fnord.feeds.TopicCursor)
}

void TopicCursor::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  topic_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TopicCursor::~TopicCursor() {
  // @@protoc_insertion_point(destructor:fnord.feeds.TopicCursor)
  SharedDtor();
}

void TopicCursor::SharedDtor() {
  if (topic_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete topic_;
  }
  if (this != default_instance_) {
  }
}

void TopicCursor::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TopicCursor::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TopicCursor_descriptor_;
}

const TopicCursor& TopicCursor::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_TopicCursor_2eproto();
  return *default_instance_;
}

TopicCursor* TopicCursor::default_instance_ = NULL;

TopicCursor* TopicCursor::New() const {
  return new TopicCursor;
}

void TopicCursor::Clear() {
  if (has_topic()) {
    if (topic_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      topic_->clear();
    }
  }
  offsets_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TopicCursor::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fnord.feeds.TopicCursor)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string topic = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_topic()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->topic().data(), this->topic().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "topic");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_offsets;
        break;
      }

      // repeated .fnord.feeds.TopicCursorOffset offsets = 2;
      case 2: {
        if (tag == 18) {
         parse_offsets:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_offsets()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_offsets;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fnord.feeds.TopicCursor)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fnord.feeds.TopicCursor)
  return false;
#undef DO_
}

void TopicCursor::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fnord.feeds.TopicCursor)
  // required string topic = 1;
  if (has_topic()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "topic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->topic(), output);
  }

  // repeated .fnord.feeds.TopicCursorOffset offsets = 2;
  for (int i = 0; i < this->offsets_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->offsets(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:fnord.feeds.TopicCursor)
}

::google::protobuf::uint8* TopicCursor::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:fnord.feeds.TopicCursor)
  // required string topic = 1;
  if (has_topic()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->topic().data(), this->topic().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "topic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->topic(), target);
  }

  // repeated .fnord.feeds.TopicCursorOffset offsets = 2;
  for (int i = 0; i < this->offsets_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->offsets(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fnord.feeds.TopicCursor)
  return target;
}

int TopicCursor::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string topic = 1;
    if (has_topic()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->topic());
    }

  }
  // repeated .fnord.feeds.TopicCursorOffset offsets = 2;
  total_size += 1 * this->offsets_size();
  for (int i = 0; i < this->offsets_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->offsets(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TopicCursor::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TopicCursor* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TopicCursor*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TopicCursor::MergeFrom(const TopicCursor& from) {
  GOOGLE_CHECK_NE(&from, this);
  offsets_.MergeFrom(from.offsets_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_topic()) {
      set_topic(from.topic());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TopicCursor::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TopicCursor::CopyFrom(const TopicCursor& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TopicCursor::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->offsets())) return false;
  return true;
}

void TopicCursor::Swap(TopicCursor* other) {
  if (other != this) {
    std::swap(topic_, other->topic_);
    offsets_.Swap(&other->offsets_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TopicCursor::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TopicCursor_descriptor_;
  metadata.reflection = TopicCursor_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace feeds
}  // namespace fnord

// @@protoc_insertion_point(global_scope)