// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/Condition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/condition__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/condition__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::TimeCondition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::TimeCondition &);
size_t get_serialized_size(
  const ariac_msgs::msg::TimeCondition &,
  size_t current_alignment);
size_t
max_serialized_size_TimeCondition(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::PartPlaceCondition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::PartPlaceCondition &);
size_t get_serialized_size(
  const ariac_msgs::msg::PartPlaceCondition &,
  size_t current_alignment);
size_t
max_serialized_size_PartPlaceCondition(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::SubmissionCondition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::SubmissionCondition &);
size_t get_serialized_size(
  const ariac_msgs::msg::SubmissionCondition &,
  size_t current_alignment);
size_t
max_serialized_size_SubmissionCondition(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_serialize(
  const ariac_msgs::msg::Condition & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: time_condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.time_condition,
    cdr);
  // Member: part_place_condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.part_place_condition,
    cdr);
  // Member: submission_condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.submission_condition,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::Condition & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: time_condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.time_condition);

  // Member: part_place_condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.part_place_condition);

  // Member: submission_condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.submission_condition);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::Condition & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_condition

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.time_condition, current_alignment);
  // Member: part_place_condition

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.part_place_condition, current_alignment);
  // Member: submission_condition

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.submission_condition, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_Condition(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time_condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TimeCondition(
        full_bounded, current_alignment);
    }
  }

  // Member: part_place_condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PartPlaceCondition(
        full_bounded, current_alignment);
    }
  }

  // Member: submission_condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SubmissionCondition(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Condition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::Condition *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Condition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::Condition *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Condition__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::Condition *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Condition__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Condition(full_bounded, 0);
}

static message_type_support_callbacks_t _Condition__callbacks = {
  "ariac_msgs::msg",
  "Condition",
  _Condition__cdr_serialize,
  _Condition__cdr_deserialize,
  _Condition__get_serialized_size,
  _Condition__max_serialized_size
};

static rosidl_message_type_support_t _Condition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Condition__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ariac_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::Condition>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_Condition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, Condition)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_Condition__handle;
}

#ifdef __cplusplus
}
#endif
