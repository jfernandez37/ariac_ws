// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/AGVStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__AGVStatus __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__AGVStatus __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AGVStatus_
{
  using Type = AGVStatus_<ContainerAllocator>;

  explicit AGVStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = 0;
      this->position = 0.0;
      this->velocity = 0.0;
    }
  }

  explicit AGVStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = 0;
      this->position = 0.0;
      this->velocity = 0.0;
    }
  }

  // field types and members
  using _location_type =
    int8_t;
  _location_type location;
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__location(
    const int8_t & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t KITTING =
    0;
  static constexpr int8_t ASSEMBLY_FRONT =
    1;
  static constexpr int8_t ASSEMBLY_BACK =
    2;
  static constexpr int8_t UNKNOWN =
    99;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::AGVStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::AGVStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AGVStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AGVStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__AGVStatus
    std::shared_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__AGVStatus
    std::shared_ptr<ariac_msgs::msg::AGVStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AGVStatus_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const AGVStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AGVStatus_

// alias to use template instance with default allocator
using AGVStatus =
  ariac_msgs::msg::AGVStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t AGVStatus_<ContainerAllocator>::KITTING;
template<typename ContainerAllocator>
constexpr int8_t AGVStatus_<ContainerAllocator>::ASSEMBLY_FRONT;
template<typename ContainerAllocator>
constexpr int8_t AGVStatus_<ContainerAllocator>::ASSEMBLY_BACK;
template<typename ContainerAllocator>
constexpr int8_t AGVStatus_<ContainerAllocator>::UNKNOWN;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__STRUCT_HPP_
