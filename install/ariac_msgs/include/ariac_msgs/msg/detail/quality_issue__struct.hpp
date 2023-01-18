// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__QualityIssue __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__QualityIssue __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QualityIssue_
{
  using Type = QualityIssue_<ContainerAllocator>;

  explicit QualityIssue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_passed = false;
      this->missing_part = false;
      this->flipped_part = false;
      this->faulty_part = false;
      this->incorrect_part_type = false;
      this->incorrect_part_color = false;
    }
  }

  explicit QualityIssue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->all_passed = false;
      this->missing_part = false;
      this->flipped_part = false;
      this->faulty_part = false;
      this->incorrect_part_type = false;
      this->incorrect_part_color = false;
    }
  }

  // field types and members
  using _all_passed_type =
    bool;
  _all_passed_type all_passed;
  using _missing_part_type =
    bool;
  _missing_part_type missing_part;
  using _flipped_part_type =
    bool;
  _flipped_part_type flipped_part;
  using _faulty_part_type =
    bool;
  _faulty_part_type faulty_part;
  using _incorrect_part_type_type =
    bool;
  _incorrect_part_type_type incorrect_part_type;
  using _incorrect_part_color_type =
    bool;
  _incorrect_part_color_type incorrect_part_color;

  // setters for named parameter idiom
  Type & set__all_passed(
    const bool & _arg)
  {
    this->all_passed = _arg;
    return *this;
  }
  Type & set__missing_part(
    const bool & _arg)
  {
    this->missing_part = _arg;
    return *this;
  }
  Type & set__flipped_part(
    const bool & _arg)
  {
    this->flipped_part = _arg;
    return *this;
  }
  Type & set__faulty_part(
    const bool & _arg)
  {
    this->faulty_part = _arg;
    return *this;
  }
  Type & set__incorrect_part_type(
    const bool & _arg)
  {
    this->incorrect_part_type = _arg;
    return *this;
  }
  Type & set__incorrect_part_color(
    const bool & _arg)
  {
    this->incorrect_part_color = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::QualityIssue_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::QualityIssue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::QualityIssue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::QualityIssue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__QualityIssue
    std::shared_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__QualityIssue
    std::shared_ptr<ariac_msgs::msg::QualityIssue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QualityIssue_ & other) const
  {
    if (this->all_passed != other.all_passed) {
      return false;
    }
    if (this->missing_part != other.missing_part) {
      return false;
    }
    if (this->flipped_part != other.flipped_part) {
      return false;
    }
    if (this->faulty_part != other.faulty_part) {
      return false;
    }
    if (this->incorrect_part_type != other.incorrect_part_type) {
      return false;
    }
    if (this->incorrect_part_color != other.incorrect_part_color) {
      return false;
    }
    return true;
  }
  bool operator!=(const QualityIssue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QualityIssue_

// alias to use template instance with default allocator
using QualityIssue =
  ariac_msgs::msg::QualityIssue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__STRUCT_HPP_
