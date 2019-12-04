/*
 * @Author: zhuxiaolong 
 * @Date: 2019-12-04 09:37:01 
 * @Last Modified by: zhuxiaolong
 * @Last Modified time: 2019-12-04 10:13:53
 */

#pragma once

class Channel;

namespace my_name_space {

class EventLoop : public CallbackInterface {
 public:
  typedef vector<int> IntVector;
  enum UrlTableErrors {
    ERROR_OUT_OF_MEMOTY = 0,
    ERROR_MALFORMED_INPUT,
  };
  explicit EventLoop(const int xx);

  void Add(const std::string& input, Channel* output);

  int num_entries() const { return num_entries_; }
  void set_num_entries(int num_entries) { num_entries_ = num_entries; }

 private:
  DISALLOW_COPY_AND_ASSIGN(EventLoop);

  const int kDaysInWeeks = 7;
  int num_entries_;
  int num_complated_connections_;

  Channel* channel_;
}; // class EventLoop

} // namespace my_name_space