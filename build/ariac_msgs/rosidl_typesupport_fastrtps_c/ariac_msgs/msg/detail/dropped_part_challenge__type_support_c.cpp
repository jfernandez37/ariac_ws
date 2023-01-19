// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/dropped_part_challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/dropped_part_challenge__struct.h"
#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"
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

#include "ariac_msgs/msg/detail/part__functions.h"  // part_to_drop
#include "rosidl_runtime_c/string.h"  // robot
#include "rosidl_runtime_c/string_functions.h"  // robot

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__Part(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__Part(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Part)();


using _DroppedPartChallenge__ros_msg_type = ariac_msgs__msg__DroppedPartChallenge;

static bool _DroppedPartChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DroppedPartChallenge__ros_msg_type * ros_message = static_cast<const _DroppedPartChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: robot
  {
    const rosidl_runtime_c__String * str = &ros_message->robot;
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

  // Field name: part_to_drop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Part
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->part_to_drop, cdr))
    {
      return false;
    }
  }

  // Field name: drop_after_num
  {
    cdr << ros_message->drop_after_num;
  }

  // Field name: drop_after_time
  {
    cdr << ros_message->drop_after_time;
  }

  return true;
}

static bool _DroppedPartChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DroppedPartChallenge__ros_msg_type * ros_message = static_cast<_DroppedPartChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: robot
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot.data) {
      rosidl_runtime_c__String__init(&ros_message->robot);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot'\n");
      return false;
    }
  }

  // Field name: part_to_drop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Part
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->part_to_drop))
    {
      return false;
    }
  }

  // Field name: drop_after_num
  {
    cdr >> ros_message->drop_after_num;
  }

  // Field name: drop_after_time
  {
    cdr >> ros_message->drop_after_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DroppedPartChallenge__ros_msg_type * ros_message = static_cast<const _DroppedPartChallenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot.size + 1);
  // field.name part_to_drop

  current_alignment += get_serialized_size_ariac_msgs__msg__Part(
    &(ros_message->part_to_drop), current_alignment);
  // field.name drop_after_num
  {
    size_t item_size = sizeof(ros_message->drop_after_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drop_after_time
  {
    size_t item_size = sizeof(ros_message->drop_after_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DroppedPartChallenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: part_to_drop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__Part(
        full_bounded, current_alignment);
    }
  }
  // member: drop_after_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drop_after_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DroppedPartChallenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DroppedPartChallenge = {
  "ariac_msgs::msg",
  "DroppedPartChallenge",
  _DroppedPartChallenge__cdr_serialize,
  _DroppedPartChallenge__cdr_deserialize,
  _DroppedPartChallenge__get_serialized_size,
  _DroppedPartChallenge__max_serialized_size
};

static rosidl_message_type_support_t _DroppedPartChallenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DroppedPartChallenge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge)() {
  return &_DroppedPartChallenge__type_support;
}

#if defined(__cplusplus)
}
#endif
