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

class Init_FaultyPartChallenge_quandrant4
{
public:
  explicit Init_FaultyPartChallenge_quandrant4(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::FaultyPartChallenge quandrant4(::ariac_msgs::msg::FaultyPartChallenge::_quandrant4_type arg)
  {
    msg_.quandrant4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_quandrant3
{
public:
  explicit Init_FaultyPartChallenge_quandrant3(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  Init_FaultyPartChallenge_quandrant4 quandrant3(::ariac_msgs::msg::FaultyPartChallenge::_quandrant3_type arg)
  {
    msg_.quandrant3 = std::move(arg);
    return Init_FaultyPartChallenge_quandrant4(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_quandrant2
{
public:
  explicit Init_FaultyPartChallenge_quandrant2(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  Init_FaultyPartChallenge_quandrant3 quandrant2(::ariac_msgs::msg::FaultyPartChallenge::_quandrant2_type arg)
  {
    msg_.quandrant2 = std::move(arg);
    return Init_FaultyPartChallenge_quandrant3(msg_);
  }

private:
  ::ariac_msgs::msg::FaultyPartChallenge msg_;
};

class Init_FaultyPartChallenge_quandrant1
{
public:
  explicit Init_FaultyPartChallenge_quandrant1(::ariac_msgs::msg::FaultyPartChallenge & msg)
  : msg_(msg)
  {}
  Init_FaultyPartChallenge_quandrant2 quandrant1(::ariac_msgs::msg::FaultyPartChallenge::_quandrant1_type arg)
  {
    msg_.quandrant1 = std::move(arg);
    return Init_FaultyPartChallenge_quandrant2(msg_);
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
  Init_FaultyPartChallenge_quandrant1 order_id(::ariac_msgs::msg::FaultyPartChallenge::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return Init_FaultyPartChallenge_quandrant1(msg_);
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
