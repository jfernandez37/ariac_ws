// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/AssemblyPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__struct.hpp"
// Member 'assembled_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'install_direction'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__AssemblyPart __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__AssemblyPart __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AssemblyPart_
{
  using Type = AssemblyPart_<ContainerAllocator>;

  explicit AssemblyPart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_init),
    assembled_pose(_init),
    install_direction(_init)
  {
    (void)_init;
  }

  explicit AssemblyPart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_alloc, _init),
    assembled_pose(_alloc, _init),
    install_direction(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _part_type =
    ariac_msgs::msg::Part_<ContainerAllocator>;
  _part_type part;
  using _assembled_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _assembled_pose_type assembled_pose;
  using _install_direction_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _install_direction_type install_direction;

  // setters for named parameter idiom
  Type & set__part(
    const ariac_msgs::msg::Part_<ContainerAllocator> & _arg)
  {
    this->part = _arg;
    return *this;
  }
  Type & set__assembled_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->assembled_pose = _arg;
    return *this;
  }
  Type & set__install_direction(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->install_direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::AssemblyPart_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::AssemblyPart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__AssemblyPart
    std::shared_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__AssemblyPart
    std::shared_ptr<ariac_msgs::msg::AssemblyPart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssemblyPart_ & other) const
  {
    if (this->part != other.part) {
      return false;
    }
    if (this->assembled_pose != other.assembled_pose) {
      return false;
    }
    if (this->install_direction != other.install_direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssemblyPart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssemblyPart_

// alias to use template instance with default allocator
using AssemblyPart =
  ariac_msgs::msg::AssemblyPart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__STRUCT_HPP_
