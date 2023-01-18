// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'condition'
#include "ariac_msgs/msg/detail/challenge_condition__struct.hpp"
// Member 'robots_to_disable'
#include "ariac_msgs/msg/detail/robots__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__RobotMalfunctionChallenge __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__RobotMalfunctionChallenge __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMalfunctionChallenge_
{
  using Type = RobotMalfunctionChallenge_<ContainerAllocator>;

  explicit RobotMalfunctionChallenge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : condition(_init),
    robots_to_disable(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
    }
  }

  explicit RobotMalfunctionChallenge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : condition(_alloc, _init),
    robots_to_disable(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration = 0.0;
    }
  }

  // field types and members
  using _duration_type =
    double;
  _duration_type duration;
  using _condition_type =
    ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>;
  _condition_type condition;
  using _robots_to_disable_type =
    ariac_msgs::msg::Robots_<ContainerAllocator>;
  _robots_to_disable_type robots_to_disable;

  // setters for named parameter idiom
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }
  Type & set__condition(
    const ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> & _arg)
  {
    this->condition = _arg;
    return *this;
  }
  Type & set__robots_to_disable(
    const ariac_msgs::msg::Robots_<ContainerAllocator> & _arg)
  {
    this->robots_to_disable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__RobotMalfunctionChallenge
    std::shared_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__RobotMalfunctionChallenge
    std::shared_ptr<ariac_msgs::msg::RobotMalfunctionChallenge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMalfunctionChallenge_ & other) const
  {
    if (this->duration != other.duration) {
      return false;
    }
    if (this->condition != other.condition) {
      return false;
    }
    if (this->robots_to_disable != other.robots_to_disable) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMalfunctionChallenge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMalfunctionChallenge_

// alias to use template instance with default allocator
using RobotMalfunctionChallenge =
  ariac_msgs::msg::RobotMalfunctionChallenge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__STRUCT_HPP_
