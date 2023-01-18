// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/vacuum_gripper_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_VacuumGripperState_type
{
public:
  explicit Init_VacuumGripperState_type(::ariac_msgs::msg::VacuumGripperState & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::VacuumGripperState type(::ariac_msgs::msg::VacuumGripperState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::VacuumGripperState msg_;
};

class Init_VacuumGripperState_attached
{
public:
  explicit Init_VacuumGripperState_attached(::ariac_msgs::msg::VacuumGripperState & msg)
  : msg_(msg)
  {}
  Init_VacuumGripperState_type attached(::ariac_msgs::msg::VacuumGripperState::_attached_type arg)
  {
    msg_.attached = std::move(arg);
    return Init_VacuumGripperState_type(msg_);
  }

private:
  ::ariac_msgs::msg::VacuumGripperState msg_;
};

class Init_VacuumGripperState_enabled
{
public:
  Init_VacuumGripperState_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VacuumGripperState_attached enabled(::ariac_msgs::msg::VacuumGripperState::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_VacuumGripperState_attached(msg_);
  }

private:
  ::ariac_msgs::msg::VacuumGripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::VacuumGripperState>()
{
  return ariac_msgs::msg::builder::Init_VacuumGripperState_enabled();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__BUILDER_HPP_
