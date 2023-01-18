// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Part.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART__BUILDER_HPP_

#include "ariac_msgs/msg/detail/part__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Part_type
{
public:
  explicit Init_Part_type(::ariac_msgs::msg::Part & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::Part type(::ariac_msgs::msg::Part::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Part msg_;
};

class Init_Part_color
{
public:
  Init_Part_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Part_type color(::ariac_msgs::msg::Part::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Part_type(msg_);
  }

private:
  ::ariac_msgs::msg::Part msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Part>()
{
  return ariac_msgs::msg::builder::Init_Part_color();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PART__BUILDER_HPP_
