// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/CompetitionState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__CompetitionState __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__CompetitionState __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CompetitionState_
{
  using Type = CompetitionState_<ContainerAllocator>;

  explicit CompetitionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->competition_state = 0;
    }
  }

  explicit CompetitionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->competition_state = 0;
    }
  }

  // field types and members
  using _competition_state_type =
    uint8_t;
  _competition_state_type competition_state;

  // setters for named parameter idiom
  Type & set__competition_state(
    const uint8_t & _arg)
  {
    this->competition_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t IDLE =
    0u;
  static constexpr uint8_t READY =
    1u;
  static constexpr uint8_t STARTED =
    2u;
  static constexpr uint8_t ORDER_ANNOUNCEMENTS_DONE =
    3u;
  static constexpr uint8_t ENDED =
    4u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::CompetitionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::CompetitionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::CompetitionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::CompetitionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__CompetitionState
    std::shared_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__CompetitionState
    std::shared_ptr<ariac_msgs::msg::CompetitionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CompetitionState_ & other) const
  {
    if (this->competition_state != other.competition_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const CompetitionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CompetitionState_

// alias to use template instance with default allocator
using CompetitionState =
  ariac_msgs::msg::CompetitionState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CompetitionState_<ContainerAllocator>::IDLE;
template<typename ContainerAllocator>
constexpr uint8_t CompetitionState_<ContainerAllocator>::READY;
template<typename ContainerAllocator>
constexpr uint8_t CompetitionState_<ContainerAllocator>::STARTED;
template<typename ContainerAllocator>
constexpr uint8_t CompetitionState_<ContainerAllocator>::ORDER_ANNOUNCEMENTS_DONE;
template<typename ContainerAllocator>
constexpr uint8_t CompetitionState_<ContainerAllocator>::ENDED;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__STRUCT_HPP_
