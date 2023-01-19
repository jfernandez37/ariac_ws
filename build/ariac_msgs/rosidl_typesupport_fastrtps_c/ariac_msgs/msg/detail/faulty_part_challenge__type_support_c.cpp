// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/faulty_part_challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.h"
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"
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

#include "rosidl_runtime_c/string.h"  // order_id
#include "rosidl_runtime_c/string_functions.h"  // order_id

// forward declare type support functions


using _FaultyPartChallenge__ros_msg_type = ariac_msgs__msg__FaultyPartChallenge;

static bool _FaultyPartChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FaultyPartChallenge__ros_msg_type * ros_message = static_cast<const _FaultyPartChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: order_id
  {
    const rosidl_runtime_c__String * str = &ros_message->order_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: quadrant1
  {
    cdr << (ros_message->quadrant1 ? true : false);
  }

  // Field name: quadrant2
  {
    cdr << (ros_message->quadrant2 ? true : false);
  }

  // Field name: quadrant3
  {
    cdr << (ros_message->quadrant3 ? true : false);
  }

  // Field name: quadrant4
  {
    cdr << (ros_message->quadrant4 ? true : false);
  }

  return true;
}

static bool _FaultyPartChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FaultyPartChallenge__ros_msg_type * ros_message = static_cast<_FaultyPartChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: order_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->order_id.data) {
      rosidl_runtime_c__String__init(&ros_message->order_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->order_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'order_id'\n");
      return false;
    }
  }

  // Field name: quadrant1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quadrant1 = tmp ? true : false;
  }

  // Field name: quadrant2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quadrant2 = tmp ? true : false;
  }

  // Field name: quadrant3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quadrant3 = tmp ? true : false;
  }

  // Field name: quadrant4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->quadrant4 = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FaultyPartChallenge__ros_msg_type * ros_message = static_cast<const _FaultyPartChallenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name order_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->order_id.size + 1);
  // field.name quadrant1
  {
    size_t item_size = sizeof(ros_message->quadrant1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quadrant2
  {
    size_t item_size = sizeof(ros_message->quadrant2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quadrant3
  {
    size_t item_size = sizeof(ros_message->quadrant3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quadrant4
  {
    size_t item_size = sizeof(ros_message->quadrant4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FaultyPartChallenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: order_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: quadrant1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quadrant2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quadrant3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quadrant4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _FaultyPartChallenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FaultyPartChallenge = {
  "ariac_msgs::msg",
  "FaultyPartChallenge",
  _FaultyPartChallenge__cdr_serialize,
  _FaultyPartChallenge__cdr_deserialize,
  _FaultyPartChallenge__get_serialized_size,
  _FaultyPartChallenge__max_serialized_size
};

static rosidl_message_type_support_t _FaultyPartChallenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FaultyPartChallenge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge)() {
  return &_FaultyPartChallenge__type_support;
}

#if defined(__cplusplus)
}
#endif
