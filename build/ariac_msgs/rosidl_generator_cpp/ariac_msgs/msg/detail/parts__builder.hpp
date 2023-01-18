// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Parts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PARTS__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PARTS__BUILDER_HPP_

#include "ariac_msgs/msg/detail/parts__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Parts_parts
{
public:
  Init_Parts_parts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::msg::Parts parts(::ariac_msgs::msg::Parts::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Parts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Parts>()
{
  return ariac_msgs::msg::builder::Init_Parts_parts();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PARTS__BUILDER_HPP_
