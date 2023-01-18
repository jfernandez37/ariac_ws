// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/BreakBeamStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__BUILDER_HPP_

#include "ariac_msgs/msg/detail/break_beam_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_BreakBeamStatus_object_detected
{
public:
  explicit Init_BreakBeamStatus_object_detected(::ariac_msgs::msg::BreakBeamStatus & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::BreakBeamStatus object_detected(::ariac_msgs::msg::BreakBeamStatus::_object_detected_type arg)
  {
    msg_.object_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::BreakBeamStatus msg_;
};

class Init_BreakBeamStatus_header
{
public:
  Init_BreakBeamStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BreakBeamStatus_object_detected header(::ariac_msgs::msg::BreakBeamStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BreakBeamStatus_object_detected(msg_);
  }

private:
  ::ariac_msgs::msg::BreakBeamStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::BreakBeamStatus>()
{
  return ariac_msgs::msg::builder::Init_BreakBeamStatus_header();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__BUILDER_HPP_
