// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/CombinedTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__BUILDER_HPP_

#include "ariac_msgs/msg/detail/combined_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_CombinedTask_parts
{
public:
  explicit Init_CombinedTask_parts(::ariac_msgs::msg::CombinedTask & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::CombinedTask parts(::ariac_msgs::msg::CombinedTask::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::CombinedTask msg_;
};

class Init_CombinedTask_station
{
public:
  Init_CombinedTask_station()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CombinedTask_parts station(::ariac_msgs::msg::CombinedTask::_station_type arg)
  {
    msg_.station = std::move(arg);
    return Init_CombinedTask_parts(msg_);
  }

private:
  ::ariac_msgs::msg::CombinedTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::CombinedTask>()
{
  return ariac_msgs::msg::builder::Init_CombinedTask_station();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__BUILDER_HPP_
