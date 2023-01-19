// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_FaultyPartChallenge_quadrant4
{
public:
  explicit Init_FaultyPartChallenge_quadrant4(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::FaultyPartChallenge quadrant4(::ariac_msgs::msg::FaultyPartChallenge::_quadrant4_type arg)
  {
    msg_.quadrant4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_quadrant3
{
public:
  explicit Init_FaultyPartChallenge_quadrant3(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  Init_FaultyPartChallenge_quadrant4 quadrant3(::ariac_msgs::msg::FaultyPartChallenge::_quadrant3_type arg)
  {
    msg_.quadrant3 = std::move(arg);
    return Init_FaultyPartChallenge_quadrant4(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_quadrant2
{
public:
  explicit Init_FaultyPartChallenge_quadrant2(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  Init_FaultyPartChallenge_quadrant3 quadrant2(::ariac_msgs::msg::FaultyPartChallenge::_quadrant2_type arg)
  {
    msg_.quadrant2 = std::move(arg);
    return Init_FaultyPartChallenge_quadrant3(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_quadrant1
{
public:
  explicit Init_FaultyPartChallenge_quadrant1(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  Init_FaultyPartChallenge_quadrant2 quadrant1(::ariac_msgs::msg::FaultyPartChallenge::_quadrant1_type arg)
  {
    msg_.quadrant1 = std::move(arg);
    return Init_FaultyPartChallenge_quadrant2(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_order_id
{
public:
  Init_FaultyPartChallenge_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaultyPartChallenge_quadrant1 order_id(::ariac_msgs::msg::FaultyPartChallenge::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_FaultyPartChallenge_quadrant1(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::FaultyPartChallenge>()
{
  return ariac_msgs::msg::builder::Init_FaultyPartChallenge_order_id();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__BUILDER_HPP_
