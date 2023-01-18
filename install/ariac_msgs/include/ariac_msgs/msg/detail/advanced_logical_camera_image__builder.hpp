// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/advanced_logical_camera_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_AdvancedLogicalCameraImage_sensor_pose
{
public:
  explicit Init_AdvancedLogicalCameraImage_sensor_pose(::ariac_msgs::msg::AdvancedLogicalCameraImage & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::AdvancedLogicalCameraImage sensor_pose(::ariac_msgs::msg::AdvancedLogicalCameraImage::_sensor_pose_type arg)
  {
    msg_.sensor_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::AdvancedLogicalCameraImage msg_;
};

class Init_AdvancedLogicalCameraImage_tray_poses
{
public:
  explicit Init_AdvancedLogicalCameraImage_tray_poses(::ariac_msgs::msg::AdvancedLogicalCameraImage & msg)
  : msg_(msg)
  {}
  Init_AdvancedLogicalCameraImage_sensor_pose tray_poses(::ariac_msgs::msg::AdvancedLogicalCameraImage::_tray_poses_type arg)
  {
    msg_.tray_poses = std::move(arg);
    return Init_AdvancedLogicalCameraImage_sensor_pose(msg_);
  }

private:
  ::ariac_msgs::msg::AdvancedLogicalCameraImage msg_;
};

class Init_AdvancedLogicalCameraImage_part_poses
{
public:
  Init_AdvancedLogicalCameraImage_part_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdvancedLogicalCameraImage_tray_poses part_poses(::ariac_msgs::msg::AdvancedLogicalCameraImage::_part_poses_type arg)
  {
    msg_.part_poses = std::move(arg);
    return Init_AdvancedLogicalCameraImage_tray_poses(msg_);
  }

private:
  ::ariac_msgs::msg::AdvancedLogicalCameraImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::AdvancedLogicalCameraImage>()
{
  return ariac_msgs::msg::builder::Init_AdvancedLogicalCameraImage_part_poses();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_
