// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/KittingTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__BUILDER_HPP_

#include "ariac_msgs/msg/detail/kitting_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_KittingTask_parts
{
public:
  explicit Init_KittingTask_parts(::ariac_msgs::msg::KittingTask & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::KittingTask parts(::ariac_msgs::msg::KittingTask::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::KittingTask msg_;
};

class Init_KittingTask_destination
{
public:
  explicit Init_KittingTask_destination(::ariac_msgs::msg::KittingTask & msg)
  : msg_(msg)
  {}
  Init_KittingTask_parts destination(::ariac_msgs::msg::KittingTask::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_KittingTask_parts(msg_);
  }

private:
  ::ariac_msgs::msg::KittingTask msg_;
};

class Init_KittingTask_tray_id
{
public:
  explicit Init_KittingTask_tray_id(::ariac_msgs::msg::KittingTask & msg)
  : msg_(msg)
  {}
  Init_KittingTask_destination tray_id(::ariac_msgs::msg::KittingTask::_tray_id_type arg)
  {
    msg_.tray_id = std::move(arg);
    return Init_KittingTask_destination(msg_);
  }

private:
  ::ariac_msgs::msg::KittingTask msg_;
};

class Init_KittingTask_agv_number
{
public:
  Init_KittingTask_agv_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KittingTask_tray_id agv_number(::ariac_msgs::msg::KittingTask::_agv_number_type arg)
  {
    msg_.agv_number = std::move(arg);
    return Init_KittingTask_tray_id(msg_);
  }

private:
  ::ariac_msgs::msg::KittingTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::KittingTask>()
{
  return ariac_msgs::msg::builder::Init_KittingTask_agv_number();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__BUILDER_HPP_
