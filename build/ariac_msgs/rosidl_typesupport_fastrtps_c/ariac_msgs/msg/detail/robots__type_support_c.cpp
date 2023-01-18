// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/robots__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/robots__struct.h"
#include "ariac_msgs/msg/detail/robots__functions.h"
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


using _Robots__ros_msg_type = ariac_msgs__msg__Robots;

static bool _Robots__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Robots__ros_msg_type * ros_message = static_cast<const _Robots__ros_msg_type *>(untyped_ros_message);
  // Field name: floor_robot
  {
    cdr << (ros_message->floor_robot ? true : false);
  }

  // Field name: ceiling_robot
  {
    cdr << (ros_message->ceiling_robot ? true : false);
  }

  return true;
}

static bool _Robots__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Robots__ros_msg_type * ros_message = static_cast<_Robots__ros_msg_type *>(untyped_ros_message);
  // Field name: floor_robot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->floor_robot = tmp ? true : false;
  }

  // Field name: ceiling_robot
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ceiling_robot = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__Robots(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Robots__ros_msg_type * ros_message = static_cast<const _Robots__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name floor_robot
  {
    size_t item_size = sizeof(ros_message->floor_robot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ceiling_robot
  {
    size_t item_size = sizeof(ros_message->ceiling_robot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Robots__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__Robots(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__Robots(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: floor_robot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ceiling_robot
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Robots__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__Robots(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Robots = {
  "ariac_msgs::msg",
  "Robots",
  _Robots__cdr_serialize,
  _Robots__cdr_deserialize,
  _Robots__get_serialized_size,
  _Robots__max_serialized_size
};

static rosidl_message_type_support_t _Robots__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Robots,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Robots)() {
  return &_Robots__type_support;
}

#if defined(__cplusplus)
}
#endif
