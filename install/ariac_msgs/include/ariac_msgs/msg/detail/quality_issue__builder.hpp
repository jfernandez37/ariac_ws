// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/quality_issue__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_QualityIssue_incorrect_part_color
{
public:
  explicit Init_QualityIssue_incorrect_part_color(::ariac_msgs::msg::QualityIssue & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::QualityIssue incorrect_part_color(::ariac_msgs::msg::QualityIssue::_incorrect_part_color_type arg)
  {
    msg_.incorrect_part_color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::QualityIssue msg_;
};

class Init_QualityIssue_incorrect_part_type
{
public:
  explicit Init_QualityIssue_incorrect_part_type(::ariac_msgs::msg::QualityIssue & msg)
  : msg_(msg)
  {}
  Init_QualityIssue_incorrect_part_color incorrect_part_type(::ariac_msgs::msg::QualityIssue::_incorrect_part_type_type arg)
  {
    msg_.incorrect_part_type = std::move(arg);
    return Init_QualityIssue_incorrect_part_color(msg_);
  }

private:
  ::ariac_msgs::msg::QualityIssue msg_;
};

class Init_QualityIssue_faulty_part
{
public:
  explicit Init_QualityIssue_faulty_part(::ariac_msgs::msg::QualityIssue & msg)
  : msg_(msg)
  {}
  Init_QualityIssue_incorrect_part_type faulty_part(::ariac_msgs::msg::QualityIssue::_faulty_part_type arg)
  {
    msg_.faulty_part = std::move(arg);
    return Init_QualityIssue_incorrect_part_type(msg_);
  }

private:
  ::ariac_msgs::msg::QualityIssue msg_;
};

class Init_QualityIssue_flipped_part
{
public:
  explicit Init_QualityIssue_flipped_part(::ariac_msgs::msg::QualityIssue & msg)
  : msg_(msg)
  {}
  Init_QualityIssue_faulty_part flipped_part(::ariac_msgs::msg::QualityIssue::_flipped_part_type arg)
  {
    msg_.flipped_part = std::move(arg);
    return Init_QualityIssue_faulty_part(msg_);
  }

private:
  ::ariac_msgs::msg::QualityIssue msg_;
};

class Init_QualityIssue_missing_part
{
public:
  explicit Init_QualityIssue_missing_part(::ariac_msgs::msg::QualityIssue & msg)
  : msg_(msg)
  {}
  Init_QualityIssue_flipped_part missing_part(::ariac_msgs::msg::QualityIssue::_missing_part_type arg)
  {
    msg_.missing_part = std::move(arg);
    return Init_QualityIssue_flipped_part(msg_);
  }

private:
  ::ariac_msgs::msg::QualityIssue msg_;
};

class Init_QualityIssue_all_passed
{
public:
  Init_QualityIssue_all_passed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QualityIssue_missing_part all_passed(::ariac_msgs::msg::QualityIssue::_all_passed_type arg)
  {
    msg_.all_passed = std::move(arg);
    return Init_QualityIssue_missing_part(msg_);
  }

private:
  ::ariac_msgs::msg::QualityIssue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::QualityIssue>()
{
  return ariac_msgs::msg::builder::Init_QualityIssue_all_passed();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__BUILDER_HPP_
