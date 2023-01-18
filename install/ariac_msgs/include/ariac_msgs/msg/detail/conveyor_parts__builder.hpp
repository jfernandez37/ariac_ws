// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/ConveyorParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__BUILDER_HPP_

#include "ariac_msgs/msg/detail/conveyor_parts__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_ConveyorParts_parts
{
public:
  Init_ConveyorParts_parts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::msg::ConveyorParts parts(::ariac_msgs::msg::ConveyorParts::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::ConveyorParts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::ConveyorParts>()
{
  return ariac_msgs::msg::builder::Init_ConveyorParts_parts();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__BUILDER_HPP_
