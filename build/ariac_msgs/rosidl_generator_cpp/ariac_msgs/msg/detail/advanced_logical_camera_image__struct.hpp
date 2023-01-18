// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'part_poses'
#include "ariac_msgs/msg/detail/part_pose__struct.hpp"
// Member 'tray_poses'
#include "ariac_msgs/msg/detail/kit_tray_pose__struct.hpp"
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__AdvancedLogicalCameraImage __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__AdvancedLogicalCameraImage __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdvancedLogicalCameraImage_
{
  using Type = AdvancedLogicalCameraImage_<ContainerAllocator>;

  explicit AdvancedLogicalCameraImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_pose(_init)
  {
    (void)_init;
  }

  explicit AdvancedLogicalCameraImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _part_poses_type =
    std::vector<ariac_msgs::msg::PartPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartPose_<ContainerAllocator>>>;
  _part_poses_type part_poses;
  using _tray_poses_type =
    std::vector<ariac_msgs::msg::KitTrayPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::KitTrayPose_<ContainerAllocator>>>;
  _tray_poses_type tray_poses;
  using _sensor_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _sensor_pose_type sensor_pose;

  // setters for named parameter idiom
  Type & set__part_poses(
    const std::vector<ariac_msgs::msg::PartPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartPose_<ContainerAllocator>>> & _arg)
  {
    this->part_poses = _arg;
    return *this;
  }
  Type & set__tray_poses(
    const std::vector<ariac_msgs::msg::KitTrayPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::KitTrayPose_<ContainerAllocator>>> & _arg)
  {
    this->tray_poses = _arg;
    return *this;
  }
  Type & set__sensor_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->sensor_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__AdvancedLogicalCameraImage
    std::shared_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__AdvancedLogicalCameraImage
    std::shared_ptr<ariac_msgs::msg::AdvancedLogicalCameraImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdvancedLogicalCameraImage_ & other) const
  {
    if (this->part_poses != other.part_poses) {
      return false;
    }
    if (this->tray_poses != other.tray_poses) {
      return false;
    }
    if (this->sensor_pose != other.sensor_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdvancedLogicalCameraImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdvancedLogicalCameraImage_

// alias to use template instance with default allocator
using AdvancedLogicalCameraImage =
  ariac_msgs::msg::AdvancedLogicalCameraImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_HPP_
