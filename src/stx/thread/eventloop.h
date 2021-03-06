/**
 * This file is part of the "libstx" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * libstx is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef libstx_EV_EVENTLOOP_H
#define libstx_EV_EVENTLOOP_H
#include <list>
#include <sys/select.h>
#include <thread>
#include <vector>
#include "stx/thread/taskscheduler.h"

namespace stx {
namespace thread {

class EventLoop : public TaskScheduler {
public:
  void run(std::function<void()> task) override;
  void runAsync(std::function<void()> task) override;
  void runOnReadable(std::function<void()> task, int fd) override;
  void runOnWritable(std::function<void()> task, int fd) override;
  void runOnWakeup(
      std::function<void()> task,
      Wakeup* wakeup,
      long wakeup_generation) override;

  void cancelFD(int fd) override;

  EventLoop();
  ~EventLoop();
  void run();
  void runOnce();
  void shutdown();
  void wakeup();

protected:

  void poll();
  void setupRunQWakeupPipe();
  void onRunQWakeup();
  void appendToRunQ(std::function<void()> task);

  fd_set op_read_;
  fd_set op_write_;
  fd_set op_error_;
  int max_fd_;
  std::atomic<bool> running_;
  int runq_wakeup_pipe_[2];
  std::list<std::function<void()>> runq_;
  std::mutex runq_mutex_;
  std::thread::id threadid_;
  std::vector<std::function<void()>> callbacks_;
  size_t num_fds_;
};

}
}
#endif
