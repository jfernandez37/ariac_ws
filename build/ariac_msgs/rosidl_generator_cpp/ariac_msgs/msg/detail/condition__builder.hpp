// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONDITION__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONDITION__BUILDER_HPP_

#include "ariac_msgs/msg/detail/condition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Condition_submission_condition
{
public:
  explicit Init_Condition_submission_condition(::ariac_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::Condition submission_condition(::ariac_msgs::msg::Condition::_submission_condition_type arg)
  {
    msg_.submission_condition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Condition msg_;
};

class Init_Condition_part_place_condition
{
public:
  explicit Init_Condition_part_place_condition(::ariac_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  Init_Condition_submission_condition part_place_condition(::ariac_msgs::msg::Condition::_part_place_condition_type arg)
  {
    msg_.part_place_condition = std::move(arg);
    return Init_Condition_submission_condition(msg_);
  }

private:
  ::ariac_msgs::msg::Condition msg_;
};

class Init_Condition_time_condition
{
public:
  explicit Init_Condition_time_condition(::ariac_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  Init_Condition_part_place_condition time_condition(::ariac_msgs::msg::Condition::_time_condition_type arg)
  {
    msg_.time_condition = std::move(arg);
    return Init_Condition_part_place_condition(msg_);
  }

private:
  ::ariac_msgs::msg::Condition msg_;
};

class Init_Condition_type
{
public:
  Init_Condition_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Condition_time_condition type(::ariac_msgs::msg::Condition::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Condition_time_condition(msg_);
  }

private:
  ::ariac_msgs::msg::Condition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Condition>()
{
  return ariac_msgs::msg::builder::Init_Condition_type();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CONDITION__BUILDER_HPP_
