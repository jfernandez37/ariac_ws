// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/quality_issue__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/quality_issue__struct.h"
#include "ariac_msgs/msg/detail/quality_issue__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _QualityIssue__ros_msg_type = ariac_msgs__msg__QualityIssue;

static bool _QualityIssue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QualityIssue__ros_msg_type * ros_message = static_cast<const _QualityIssue__ros_msg_type *>(untyped_ros_message);
  // Field name: all_passed
  {
    cdr << (ros_message->all_passed ? true : false);
  }

  // Field name: missing_part
  {
    cdr << (ros_message->missing_part ? true : false);
  }

  // Field name: flipped_part
  {
    cdr << (ros_message->flipped_part ? true : false);
  }

  // Field name: faulty_part
  {
    cdr << (ros_message->faulty_part ? true : false);
  }

  // Field name: incorrect_part_type
  {
    cdr << (ros_message->incorrect_part_type ? true : false);
  }

  // Field name: incorrect_part_color
  {
    cdr << (ros_message->incorrect_part_color ? true : false);
  }

  return true;
}

static bool _QualityIssue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QualityIssue__ros_msg_type * ros_message = static_cast<_QualityIssue__ros_msg_type *>(untyped_ros_message);
  // Field name: all_passed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->all_passed = tmp ? true : false;
  }

  // Field name: missing_part
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->missing_part = tmp ? true : false;
  }

  // Field name: flipped_part
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flipped_part = tmp ? true : false;
  }

  // Field name: faulty_part
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->faulty_part = tmp ? true : false;
  }

  // Field name: incorrect_part_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->incorrect_part_type = tmp ? true : false;
  }

  // Field name: incorrect_part_color
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->incorrect_part_color = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__QualityIssue(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QualityIssue__ros_msg_type * ros_message = static_cast<const _QualityIssue__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name all_passed
  {
    size_t item_size = sizeof(ros_message->all_passed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name missing_part
  {
    size_t item_size = sizeof(ros_message->missing_part);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flipped_part
  {
    size_t item_size = sizeof(ros_message->flipped_part);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name faulty_part
  {
    size_t item_size = sizeof(ros_message->faulty_part);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name incorrect_part_type
  {
    size_t item_size = sizeof(ros_message->incorrect_part_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name incorrect_part_color
  {
    size_t item_size = sizeof(ros_message->incorrect_part_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _QualityIssue__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__QualityIssue(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__QualityIssue(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: all_passed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: missing_part
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flipped_part
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: faulty_part
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: incorrect_part_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: incorrect_part_color
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _QualityIssue__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__QualityIssue(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_QualityIssue = {
  "ariac_msgs::msg",
  "QualityIssue",
  _QualityIssue__cdr_serialize,
  _QualityIssue__cdr_deserialize,
  _QualityIssue__get_serialized_size,
  _QualityIssue__max_serialized_size
};

static rosidl_message_type_support_t _QualityIssue__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QualityIssue,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue)() {
  return &_QualityIssue__type_support;
}

#if defined(__cplusplus)
}
#endif
