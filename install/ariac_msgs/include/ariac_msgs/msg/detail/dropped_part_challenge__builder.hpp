// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/dropped_part_challenge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_DroppedPartChallenge_bin_num
{
public:
  explicit Init_DroppedPartChallenge_bin_num(::ariac_msgs::msg::DroppedPartChallenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::DroppedPartChallenge bin_num(::ariac_msgs::msg::DroppedPartChallenge::_bin_num_type arg)
  {
    msg_.bin_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::DroppedPartChallenge msg_;
};

class Init_DroppedPartChallenge_part_to_drop
{
public:
  explicit Init_DroppedPartChallenge_part_to_drop(::ariac_msgs::msg::DroppedPartChallenge & msg)
  : msg_(msg)
  {}
  Init_DroppedPartChallenge_bin_num part_to_drop(::ariac_msgs::msg::DroppedPartChallenge::_part_to_drop_type arg)
  {
    msg_.part_to_drop = std::move(arg);
    return Init_DroppedPartChallenge_bin_num(msg_);
  }

private:
  ::ariac_msgs::msg::DroppedPartChallenge msg_;
};

class Init_DroppedPartChallenge_robot
{
public:
  Init_DroppedPartChallenge_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroppedPartChallenge_part_to_drop robot(::ariac_msgs::msg::DroppedPartChallenge::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return Init_DroppedPartChallenge_part_to_drop(msg_);
  }

private:
  ::ariac_msgs::msg::DroppedPartChallenge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::DroppedPartChallenge>()
{
  return ariac_msgs::msg::builder::Init_DroppedPartChallenge_robot();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__BUILDER_HPP_
