// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/KittingPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KITTING_PART__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__KITTING_PART__BUILDER_HPP_

#include "ariac_msgs/msg/detail/kitting_part__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_KittingPart_quadrant
{
public:
  explicit Init_KittingPart_quadrant(::ariac_msgs::msg::KittingPart & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::KittingPart quadrant(::ariac_msgs::msg::KittingPart::_quadrant_type arg)
  {
    msg_.quadrant = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::KittingPart msg_;
};

class Init_KittingPart_part
{
public:
  Init_KittingPart_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KittingPart_quadrant part(::ariac_msgs::msg::KittingPart::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_KittingPart_quadrant(msg_);
  }

private:
  ::ariac_msgs::msg::KittingPart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::KittingPart>()
{
  return ariac_msgs::msg::builder::Init_KittingPart_part();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__KITTING_PART__BUILDER_HPP_
