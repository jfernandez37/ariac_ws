// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOTS__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__Robots __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__Robots __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robots_
{
  using Type = Robots_<ContainerAllocator>;

  explicit Robots_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_robot = false;
      this->ceiling_robot = false;
    }
  }

  explicit Robots_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->floor_robot = false;
      this->ceiling_robot = false;
    }
  }

  // field types and members
  using _floor_robot_type =
    bool;
  _floor_robot_type floor_robot;
  using _ceiling_robot_type =
    bool;
  _ceiling_robot_type ceiling_robot;

  // setters for named parameter idiom
  Type & set__floor_robot(
    const bool & _arg)
  {
    this->floor_robot = _arg;
    return *this;
  }
  Type & set__ceiling_robot(
    const bool & _arg)
  {
    this->ceiling_robot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::Robots_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::Robots_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::Robots_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::Robots_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Robots_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Robots_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Robots_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Robots_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::Robots_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::Robots_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__Robots
    std::shared_ptr<ariac_msgs::msg::Robots_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__Robots
    std::shared_ptr<ariac_msgs::msg::Robots_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robots_ & other) const
  {
    if (this->floor_robot != other.floor_robot) {
      return false;
    }
    if (this->ceiling_robot != other.ceiling_robot) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robots_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robots_

// alias to use template instance with default allocator
using Robots =
  ariac_msgs::msg::Robots_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOTS__STRUCT_HPP_
