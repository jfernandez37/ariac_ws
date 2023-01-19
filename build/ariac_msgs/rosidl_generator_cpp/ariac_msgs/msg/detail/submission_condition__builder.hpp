// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/SubmissionCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__BUILDER_HPP_

#include "ariac_msgs/msg/detail/submission_condition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_SubmissionCondition_order_id
{
public:
  Init_SubmissionCondition_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::msg::SubmissionCondition order_id(::ariac_msgs::msg::SubmissionCondition::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::SubmissionCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::SubmissionCondition>()
{
  return ariac_msgs::msg::builder::Init_SubmissionCondition_order_id();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__BUILDER_HPP_
