// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__STRUCT_HPP_
#define ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Request __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Request __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PerformQualityCheck_Request_
{
  using Type = PerformQualityCheck_Request_<ContainerAllocator>;

  explicit PerformQualityCheck_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  explicit PerformQualityCheck_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : task_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = "";
    }
  }

  // field types and members
  using _task_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__task_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Request
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Request
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerformQualityCheck_Request_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerformQualityCheck_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerformQualityCheck_Request_

// alias to use template instance with default allocator
using PerformQualityCheck_Request =
  ariac_msgs::srv::PerformQualityCheck_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs


// Include directives for member types
// Member 'quadrant1'
// Member 'quadrant2'
// Member 'quadrant3'
// Member 'quadrant4'
#include "ariac_msgs/msg/detail/quality_issue__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Response __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Response __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PerformQualityCheck_Response_
{
  using Type = PerformQualityCheck_Response_<ContainerAllocator>;

  explicit PerformQualityCheck_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quadrant1(_init),
    quadrant2(_init),
    quadrant3(_init),
    quadrant4(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_id = false;
      this->all_passed = false;
      this->incorrect_tray = false;
    }
  }

  explicit PerformQualityCheck_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quadrant1(_alloc, _init),
    quadrant2(_alloc, _init),
    quadrant3(_alloc, _init),
    quadrant4(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valid_id = false;
      this->all_passed = false;
      this->incorrect_tray = false;
    }
  }

  // field types and members
  using _valid_id_type =
    bool;
  _valid_id_type valid_id;
  using _all_passed_type =
    bool;
  _all_passed_type all_passed;
  using _incorrect_tray_type =
    bool;
  _incorrect_tray_type incorrect_tray;
  using _quadrant1_type =
    ariac_msgs::msg::QualityIssue_<ContainerAllocator>;
  _quadrant1_type quadrant1;
  using _quadrant2_type =
    ariac_msgs::msg::QualityIssue_<ContainerAllocator>;
  _quadrant2_type quadrant2;
  using _quadrant3_type =
    ariac_msgs::msg::QualityIssue_<ContainerAllocator>;
  _quadrant3_type quadrant3;
  using _quadrant4_type =
    ariac_msgs::msg::QualityIssue_<ContainerAllocator>;
  _quadrant4_type quadrant4;

  // setters for named parameter idiom
  Type & set__valid_id(
    const bool & _arg)
  {
    this->valid_id = _arg;
    return *this;
  }
  Type & set__all_passed(
    const bool & _arg)
  {
    this->all_passed = _arg;
    return *this;
  }
  Type & set__incorrect_tray(
    const bool & _arg)
  {
    this->incorrect_tray = _arg;
    return *this;
  }
  Type & set__quadrant1(
    const ariac_msgs::msg::QualityIssue_<ContainerAllocator> & _arg)
  {
    this->quadrant1 = _arg;
    return *this;
  }
  Type & set__quadrant2(
    const ariac_msgs::msg::QualityIssue_<ContainerAllocator> & _arg)
  {
    this->quadrant2 = _arg;
    return *this;
  }
  Type & set__quadrant3(
    const ariac_msgs::msg::QualityIssue_<ContainerAllocator> & _arg)
  {
    this->quadrant3 = _arg;
    return *this;
  }
  Type & set__quadrant4(
    const ariac_msgs::msg::QualityIssue_<ContainerAllocator> & _arg)
  {
    this->quadrant4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Response
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__PerformQualityCheck_Response
    std::shared_ptr<ariac_msgs::srv::PerformQualityCheck_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerformQualityCheck_Response_ & other) const
  {
    if (this->valid_id != other.valid_id) {
      return false;
    }
    if (this->all_passed != other.all_passed) {
      return false;
    }
    if (this->incorrect_tray != other.incorrect_tray) {
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
  bool operator!=(const PerformQualityCheck_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerformQualityCheck_Response_

// alias to use template instance with default allocator
using PerformQualityCheck_Response =
  ariac_msgs::srv::PerformQualityCheck_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs

namespace ariac_msgs
{

namespace srv
{

struct PerformQualityCheck
{
  using Request = ariac_msgs::srv::PerformQualityCheck_Request;
  using Response = ariac_msgs::srv::PerformQualityCheck_Response;
};

}  // namespace srv

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__STRUCT_HPP_
