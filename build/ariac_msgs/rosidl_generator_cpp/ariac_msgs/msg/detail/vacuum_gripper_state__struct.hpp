// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__VacuumGripperState __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__VacuumGripperState __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VacuumGripperState_
{
  using Type = VacuumGripperState_<ContainerAllocator>;

  explicit VacuumGripperState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      this->attached = false;
      this->type = "";
    }
  }

  explicit VacuumGripperState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      this->attached = false;
      this->type = "";
    }
  }

  // field types and members
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _attached_type =
    bool;
  _attached_type attached;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__attached(
    const bool & _arg)
  {
    this->attached = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::VacuumGripperState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::VacuumGripperState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::VacuumGripperState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::VacuumGripperState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__VacuumGripperState
    std::shared_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__VacuumGripperState
    std::shared_ptr<ariac_msgs::msg::VacuumGripperState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VacuumGripperState_ & other) const
  {
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->attached != other.attached) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const VacuumGripperState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VacuumGripperState_

// alias to use template instance with default allocator
using VacuumGripperState =
  ariac_msgs::msg::VacuumGripperState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__STRUCT_HPP_
