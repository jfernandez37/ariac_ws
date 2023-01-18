// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/AssemblyPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__BUILDER_HPP_

#include "ariac_msgs/msg/detail/assembly_part__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_AssemblyPart_install_direction
{
public:
  explicit Init_AssemblyPart_install_direction(::ariac_msgs::msg::AssemblyPart & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::AssemblyPart install_direction(::ariac_msgs::msg::AssemblyPart::_install_direction_type arg)
  {
    msg_.install_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyPart msg_;
};

class Init_AssemblyPart_assembled_pose
{
public:
  explicit Init_AssemblyPart_assembled_pose(::ariac_msgs::msg::AssemblyPart & msg)
  : msg_(msg)
  {}
  Init_AssemblyPart_install_direction assembled_pose(::ariac_msgs::msg::AssemblyPart::_assembled_pose_type arg)
  {
    msg_.assembled_pose = std::move(arg);
    return Init_AssemblyPart_install_direction(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyPart msg_;
};

class Init_AssemblyPart_part
{
public:
  Init_AssemblyPart_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssemblyPart_assembled_pose part(::ariac_msgs::msg::AssemblyPart::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_AssemblyPart_assembled_pose(msg_);
  }

private:
  ::ariac_msgs::msg::AssemblyPart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::AssemblyPart>()
{
  return ariac_msgs::msg::builder::Init_AssemblyPart_part();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__BUILDER_HPP_
