// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__BUILDER_HPP_

#include "ariac_msgs/msg/detail/assembly_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_AssemblyTask_parts
{
public:
  explicit Init_AssemblyTask_parts(::ariac_msgs::msg::AssemblyTask & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::AssemblyTask parts(::ariac_msgs::msg::AssemblyTask::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyTask msg_;
};

class Init_AssemblyTask_station
{
public:
  explicit Init_AssemblyTask_station(::ariac_msgs::msg::AssemblyTask & msg)
  : msg_(msg)
  {}
  Init_AssemblyTask_parts station(::ariac_msgs::msg::AssemblyTask::_station_type arg)
  {
    msg_.station = std::move(arg);
    return Init_AssemblyTask_parts(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyTask msg_;
};

class Init_AssemblyTask_agv_number
{
public:
  Init_AssemblyTask_agv_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssemblyTask_station agv_number(::ariac_msgs::msg::AssemblyTask::_agv_number_type arg)
  {
    msg_.agv_number = std::move(arg);
    return Init_AssemblyTask_station(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::AssemblyTask>()
{
  return ariac_msgs::msg::builder::Init_AssemblyTask_agv_number();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__BUILDER_HPP_
