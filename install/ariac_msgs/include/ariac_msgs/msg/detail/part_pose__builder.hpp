// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_POSE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART_POSE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/part_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_PartPose_pose
{
public:
  explicit Init_PartPose_pose(::ariac_msgs::msg::PartPose & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::PartPose pose(::ariac_msgs::msg::PartPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::PartPose msg_;
};

class Init_PartPose_part
{
public:
  Init_PartPose_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PartPose_pose part(::ariac_msgs::msg::PartPose::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_PartPose_pose(msg_);
  }

private:
  ::ariac_msgs::msg::PartPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::PartPose>()
{
  return ariac_msgs::msg::builder::Init_PartPose_part();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_POSE__BUILDER_HPP_
