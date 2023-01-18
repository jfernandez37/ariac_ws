// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/KitTrayPose.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KIT_TRAY_POSE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__KIT_TRAY_POSE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/kit_tray_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_KitTrayPose_pose
{
public:
  explicit Init_KitTrayPose_pose(::ariac_msgs::msg::KitTrayPose & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::KitTrayPose pose(::ariac_msgs::msg::KitTrayPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::KitTrayPose msg_;
};

class Init_KitTrayPose_id
{
public:
  Init_KitTrayPose_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KitTrayPose_pose id(::ariac_msgs::msg::KitTrayPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KitTrayPose_pose(msg_);
  }

private:
  ::ariac_msgs::msg::KitTrayPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::KitTrayPose>()
{
  return ariac_msgs::msg::builder::Init_KitTrayPose_id();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__KIT_TRAY_POSE__BUILDER_HPP_
