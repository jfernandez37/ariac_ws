// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__FaultyPartChallenge __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__FaultyPartChallenge __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaultyPartChallenge_
{
  using Type = FaultyPartChallenge_<ContainerAllocator>;

  explicit FaultyPartChallenge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->quadrant1 = false;
      this->quadrant2 = false;
      this->quadrant3 = false;
      this->quadrant4 = false;
    }
  }

  explicit FaultyPartChallenge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : order_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->order_id = "";
      this->quadrant1 = false;
      this->quadrant2 = false;
      this->quadrant3 = false;
      this->quadrant4 = false;
    }
  }

  // field types and members
  using _order_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _order_id_type order_id;
  using _quadrant1_type =
    bool;
  _quadrant1_type quadrant1;
  using _quadrant2_type =
    bool;
  _quadrant2_type quadrant2;
  using _quadrant3_type =
    bool;
  _quadrant3_type quadrant3;
  using _quadrant4_type =
    bool;
  _quadrant4_type quadrant4;

  // setters for named parameter idiom
  Type & set__order_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->order_id = _arg;
    return *this;
  }
  Type & set__quadrant1(
    const bool & _arg)
  {
    this->quadrant1 = _arg;
    return *this;
  }
  Type & set__quadrant2(
    const bool & _arg)
  {
    this->quadrant2 = _arg;
    return *this;
  }
  Type & set__quadrant3(
    const bool & _arg)
  {
    this->quadrant3 = _arg;
    return *this;
  }
  Type & set__quadrant4(
    const bool & _arg)
  {
    this->quadrant4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__FaultyPartChallenge
    std::shared_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__FaultyPartChallenge
    std::shared_ptr<ariac_msgs::msg::FaultyPartChallenge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaultyPartChallenge_ & other) const
  {
    if (this->order_id != other.order_id) {
      return false;
    }
    if (this->quadrant1 != other.quadrant1) {
      return false;
    }
    if (this->quadrant2 != other.quadrant2) {
      return false;
    }
    if (this->quadrant3 != other.quadrant3) {
      return false;
    }
    if (this->quadrant4 != other.quadrant4) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaultyPartChallenge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaultyPartChallenge_

// alias to use template instance with default allocator
using FaultyPartChallenge =
  ariac_msgs::msg::FaultyPartChallenge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__STRUCT_HPP_
