// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/ChallengeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'time_condition'
#include "ariac_msgs/msg/detail/time_condition__struct.hpp"
// Member 'part_place_condition'
#include "ariac_msgs/msg/detail/part_place_condition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__ChallengeCondition __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__ChallengeCondition __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChallengeCondition_
{
  using Type = ChallengeCondition_<ContainerAllocator>;

  explicit ChallengeCondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_condition(_init),
    part_place_condition(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit ChallengeCondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    time_condition(_alloc, _init),
    part_place_condition(_alloc, _init)
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
  using _time_condition_type =
    ariac_msgs::msg::TimeCondition_<ContainerAllocator>;
  _time_condition_type time_condition;
  using _part_place_condition_type =
    ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>;
  _part_place_condition_type part_place_condition;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__time_condition(
    const ariac_msgs::msg::TimeCondition_<ContainerAllocator> & _arg)
  {
    this->time_condition = _arg;
    return *this;
  }
  Type & set__part_place_condition(
    const ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> & _arg)
  {
    this->part_place_condition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__ChallengeCondition
    std::shared_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__ChallengeCondition
    std::shared_ptr<ariac_msgs::msg::ChallengeCondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChallengeCondition_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->time_condition != other.time_condition) {
      return false;
    }
    if (this->part_place_condition != other.part_place_condition) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChallengeCondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChallengeCondition_

// alias to use template instance with default allocator
using ChallengeCondition =
  ariac_msgs::msg::ChallengeCondition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__STRUCT_HPP_
