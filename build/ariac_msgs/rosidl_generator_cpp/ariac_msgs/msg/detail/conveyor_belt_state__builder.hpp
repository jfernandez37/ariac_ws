// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/ConveyorBeltState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/conveyor_belt_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_ConveyorBeltState_enabled
{
public:
  explicit Init_ConveyorBeltState_enabled(::ariac_msgs::msg::ConveyorBeltState & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::ConveyorBeltState enabled(::ariac_msgs::msg::ConveyorBeltState::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::ConveyorBeltState msg_;
};

class Init_ConveyorBeltState_power
{
public:
  Init_ConveyorBeltState_power()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConveyorBeltState_enabled power(::ariac_msgs::msg::ConveyorBeltState::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_ConveyorBeltState_enabled(msg_);
  }

private:
  ::ariac_msgs::msg::ConveyorBeltState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::ConveyorBeltState>()
{
  return ariac_msgs::msg::builder::Init_ConveyorBeltState_power();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__BUILDER_HPP_
