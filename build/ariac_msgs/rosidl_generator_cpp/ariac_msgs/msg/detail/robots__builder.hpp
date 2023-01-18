// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOTS__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOTS__BUILDER_HPP_

#include "ariac_msgs/msg/detail/robots__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Robots_ceiling_robot
{
public:
  explicit Init_Robots_ceiling_robot(::ariac_msgs::msg::Robots & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::Robots ceiling_robot(::ariac_msgs::msg::Robots::_ceiling_robot_type arg)
  {
    msg_.ceiling_robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Robots msg_;
};

class Init_Robots_floor_robot
{
public:
  Init_Robots_floor_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robots_ceiling_robot floor_robot(::ariac_msgs::msg::Robots::_floor_robot_type arg)
  {
    msg_.floor_robot = std::move(arg);
    return Init_Robots_ceiling_robot(msg_);
  }

private:
  ::ariac_msgs::msg::Robots msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Robots>()
{
  return ariac_msgs::msg::builder::Init_Robots_floor_robot();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOTS__BUILDER_HPP_
