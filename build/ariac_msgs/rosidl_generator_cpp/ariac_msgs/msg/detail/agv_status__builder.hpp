// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/AGVStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__BUILDER_HPP_

#include "ariac_msgs/msg/detail/agv_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_AGVStatus_velocity
{
public:
  explicit Init_AGVStatus_velocity(::ariac_msgs::msg::AGVStatus & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::AGVStatus velocity(::ariac_msgs::msg::AGVStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::AGVStatus msg_;
};

class Init_AGVStatus_position
{
public:
  explicit Init_AGVStatus_position(::ariac_msgs::msg::AGVStatus & msg)
  : msg_(msg)
  {}
  Init_AGVStatus_velocity position(::ariac_msgs::msg::AGVStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_AGVStatus_velocity(msg_);
  }

private:
  ::ariac_msgs::msg::AGVStatus msg_;
};

class Init_AGVStatus_location
{
public:
  Init_AGVStatus_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AGVStatus_position location(::ariac_msgs::msg::AGVStatus::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_AGVStatus_position(msg_);
  }

private:
  ::ariac_msgs::msg::AGVStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::AGVStatus>()
{
  return ariac_msgs::msg::builder::Init_AGVStatus_location();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__BUILDER_HPP_
