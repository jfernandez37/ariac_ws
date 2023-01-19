// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/SubmissionCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__SubmissionCondition __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__SubmissionCondition __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubmissionCondition_
{
  using Type = SubmissionCondition_<ContainerAllocator>;

  explicit SubmissionCondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
    }
  }

  explicit SubmissionCondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;

  // setters for named parameter idiom
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::SubmissionCondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::SubmissionCondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::SubmissionCondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::SubmissionCondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__SubmissionCondition
    std::shared_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__SubmissionCondition
    std::shared_ptr<ariac_msgs::msg::SubmissionCondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmissionCondition_ & other) const
  {
    if (this->order_id != other.order_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmissionCondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmissionCondition_

// alias to use template instance with default allocator
using SubmissionCondition =
  ariac_msgs::msg::SubmissionCondition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__STRUCT_HPP_
