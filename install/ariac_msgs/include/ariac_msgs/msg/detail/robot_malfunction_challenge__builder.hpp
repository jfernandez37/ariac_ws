// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotMalfunctionChallenge_robots_to_disable
{
public:
  explicit Init_RobotMalfunctionChallenge_robots_to_disable(::ariac_msgs::msg::RobotMalfunctionChallenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::RobotMalfunctionChallenge robots_to_disable(::ariac_msgs::msg::RobotMalfunctionChallenge::_robots_to_disable_type arg)
  {
    msg_.robots_to_disable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::RobotMalfunctionChallenge msg_;
};

class Init_RobotMalfunctionChallenge_condition
{
public:
  explicit Init_RobotMalfunctionChallenge_condition(::ariac_msgs::msg::RobotMalfunctionChallenge & msg)
  : msg_(msg)
  {}
  Init_RobotMalfunctionChallenge_robots_to_disable condition(::ariac_msgs::msg::RobotMalfunctionChallenge::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return Init_RobotMalfunctionChallenge_robots_to_disable(msg_);
  }

private:
  ::ariac_msgs::msg::RobotMalfunctionChallenge msg_;
};

class Init_RobotMalfunctionChallenge_duration
{
public:
  Init_RobotMalfunctionChallenge_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMalfunctionChallenge_condition duration(::ariac_msgs::msg::RobotMalfunctionChallenge::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_RobotMalfunctionChallenge_condition(msg_);
  }

private:
  ::ariac_msgs::msg::RobotMalfunctionChallenge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::RobotMalfunctionChallenge>()
{
  return ariac_msgs::msg::builder::Init_RobotMalfunctionChallenge_duration();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__BUILDER_HPP_
