// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__BUILDER_HPP_

#include "ariac_msgs/msg/detail/time_condition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeCondition_seconds
{
public:
  Init_TimeCondition_seconds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::msg::TimeCondition seconds(::ariac_msgs::msg::TimeCondition::_seconds_type arg)
  {
    msg_.seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::TimeCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::TimeCondition>()
{
  return ariac_msgs::msg::builder::Init_TimeCondition_seconds();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__BUILDER_HPP_
