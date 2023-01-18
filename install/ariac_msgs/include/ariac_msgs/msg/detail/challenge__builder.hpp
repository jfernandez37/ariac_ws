// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/challenge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Challenge_robot_malfunction_challenge
{
public:
  explicit Init_Challenge_robot_malfunction_challenge(::ariac_msgs::msg::Challenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::Challenge robot_malfunction_challenge(::ariac_msgs::msg::Challenge::_robot_malfunction_challenge_type arg)
  {
    msg_.robot_malfunction_challenge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Challenge msg_;
};

class Init_Challenge_sensor_blackout_challenge
{
public:
  explicit Init_Challenge_sensor_blackout_challenge(::ariac_msgs::msg::Challenge & msg)
  : msg_(msg)
  {}
  Init_Challenge_robot_malfunction_challenge sensor_blackout_challenge(::ariac_msgs::msg::Challenge::_sensor_blackout_challenge_type arg)
  {
    msg_.sensor_blackout_challenge = std::move(arg);
    return Init_Challenge_robot_malfunction_challenge(msg_);
  }

private:
  ::ariac_msgs::msg::Challenge msg_;
};

class Init_Challenge_dropped_part_challenge
{
public:
  explicit Init_Challenge_dropped_part_challenge(::ariac_msgs::msg::Challenge & msg)
  : msg_(msg)
  {}
  Init_Challenge_sensor_blackout_challenge dropped_part_challenge(::ariac_msgs::msg::Challenge::_dropped_part_challenge_type arg)
  {
    msg_.dropped_part_challenge = std::move(arg);
    return Init_Challenge_sensor_blackout_challenge(msg_);
  }

private:
  ::ariac_msgs::msg::Challenge msg_;
};

class Init_Challenge_faulty_part_challenge
{
public:
  explicit Init_Challenge_faulty_part_challenge(::ariac_msgs::msg::Challenge & msg)
  : msg_(msg)
  {}
  Init_Challenge_dropped_part_challenge faulty_part_challenge(::ariac_msgs::msg::Challenge::_faulty_part_challenge_type arg)
  {
    msg_.faulty_part_challenge = std::move(arg);
    return Init_Challenge_dropped_part_challenge(msg_);
  }

private:
  ::ariac_msgs::msg::Challenge msg_;
};

class Init_Challenge_type
{
public:
  Init_Challenge_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Challenge_faulty_part_challenge type(::ariac_msgs::msg::Challenge::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Challenge_faulty_part_challenge(msg_);
  }

private:
  ::ariac_msgs::msg::Challenge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Challenge>()
{
  return ariac_msgs::msg::builder::Init_Challenge_type();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE__BUILDER_HPP_
