// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'faulty_part_challenge'
#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.hpp"
// Member 'dropped_part_challenge'
#include "ariac_msgs/msg/detail/dropped_part_challenge__struct.hpp"
// Member 'sensor_blackout_challenge'
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__struct.hpp"
// Member 'robot_malfunction_challenge'
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__Challenge __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__Challenge __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Challenge_
{
  using Type = Challenge_<ContainerAllocator>;

  explicit Challenge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : faulty_part_challenge(_init),
    dropped_part_challenge(_init),
    sensor_blackout_challenge(_init),
    robot_malfunction_challenge(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit Challenge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    faulty_part_challenge(_alloc, _init),
    dropped_part_challenge(_alloc, _init),
    sensor_blackout_challenge(_alloc, _init),
    robot_malfunction_challenge(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _faulty_part_challenge_type =
    ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>;
  _faulty_part_challenge_type faulty_part_challenge;
  using _dropped_part_challenge_type =
    ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>;
  _dropped_part_challenge_type dropped_part_challenge;
  using _sensor_blackout_challenge_type =
    ariac_msgs::msg::SensorBlackoutChallenge_<ContainerAllocator>;
  _sensor_blackout_challenge_type sensor_blackout_challenge;
  using _robot_malfunction_challenge_type =
    ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>;
  _robot_malfunction_challenge_type robot_malfunction_challenge;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__faulty_part_challenge(
    const ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> & _arg)
  {
    this->faulty_part_challenge = _arg;
    return *this;
  }
  Type & set__dropped_part_challenge(
    const ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> & _arg)
  {
    this->dropped_part_challenge = _arg;
    return *this;
  }
  Type & set__sensor_blackout_challenge(
    const ariac_msgs::msg::SensorBlackoutChallenge_<ContainerAllocator> & _arg)
  {
    this->sensor_blackout_challenge = _arg;
    return *this;
  }
  Type & set__robot_malfunction_challenge(
    const ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> & _arg)
  {
    this->robot_malfunction_challenge = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::Challenge_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::Challenge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Challenge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Challenge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__Challenge
    std::shared_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__Challenge
    std::shared_ptr<ariac_msgs::msg::Challenge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Challenge_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->faulty_part_challenge != other.faulty_part_challenge) {
      return false;
    }
    if (this->dropped_part_challenge != other.dropped_part_challenge) {
      return false;
    }
    if (this->sensor_blackout_challenge != other.sensor_blackout_challenge) {
      return false;
    }
    if (this->robot_malfunction_challenge != other.robot_malfunction_challenge) {
      return false;
    }
    return true;
  }
  bool operator!=(const Challenge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Challenge_

// alias to use template instance with default allocator
using Challenge =
  ariac_msgs::msg::Challenge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE__STRUCT_HPP_
