// This file is part of the "x0" project, http://cortex.io/
//   (c) 2009-2014 Christian Parpart <trapni@gmail.com>
//
// Licensed under the MIT License (the "License"); you may not use this
// file except in compliance with the License. You may obtain a copy of
// the License at: http://opensource.org/licenses/MIT

#include <cortex-http/HttpOutput.h>
#include <cortex-http/HttpChannel.h>
#include <cortex-http/HttpResponse.h>
#include <cortex-base/io/FileRef.h>
#include <cortex-base/io/Filter.h>
#include <cortex-base/sysconfig.h>
#include <cstring>
#include <system_error>
#include <stdexcept>

#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

namespace cortex {
namespace http {

HttpOutput::HttpOutput(HttpChannel* channel) : channel_(channel), size_(0) {
}

HttpOutput::~HttpOutput() {
}

void HttpOutput::recycle() {
  size_ = 0;
}

void HttpOutput::addFilter(std::shared_ptr<Filter> filter) {
  channel_->addOutputFilter(filter);
}

void HttpOutput::removeAllFilters() {
  channel_->removeAllOutputFilters();
}

void HttpOutput::completed() {
  channel_->completed();
}

void HttpOutput::write(const char* cstr, CompletionHandler&& completed) {
  const size_t slen = strlen(cstr);
  write(BufferRef(cstr, slen), std::move(completed));
}

void HttpOutput::write(const std::string& str, CompletionHandler&& completed) {
  write(Buffer(str), std::move(completed));
}

void HttpOutput::write(Buffer&& data, CompletionHandler&& completed) {
  size_ += data.size();
  channel_->send(std::move(data), std::move(completed));
}

void HttpOutput::write(const BufferRef& data, CompletionHandler&& completed) {
  size_ += data.size();
  channel_->send(data, std::move(completed));
}

void HttpOutput::write(FileRef&& input, CompletionHandler&& completed) {
  size_ += input.size();
  channel_->send(std::move(input), std::move(completed));
}

}  // namespace http
}  // namespace cortex
