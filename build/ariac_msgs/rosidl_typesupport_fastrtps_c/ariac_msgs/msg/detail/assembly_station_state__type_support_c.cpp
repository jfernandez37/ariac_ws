// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/AssemblyStationState.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/assembly_station_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/assembly_station_state__struct.h"
#include "ariac_msgs/msg/detail/assembly_station_state__functions.h"
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


using _AssemblyStationState__ros_msg_type = ariac_msgs__msg__AssemblyStationState;

static bool _AssemblyStationState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AssemblyStationState__ros_msg_type * ros_message = static_cast<const _AssemblyStationState__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_attached
  {
    cdr << (ros_message->battery_attached ? true : false);
  }

  // Field name: sensor_attached
  {
    cdr << (ros_message->sensor_attached ? true : false);
  }

  // Field name: regulator_attached
  {
    cdr << (ros_message->regulator_attached ? true : false);
  }

  // Field name: pump_attached
  {
    cdr << (ros_message->pump_attached ? true : false);
  }

  return true;
}

static bool _AssemblyStationState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AssemblyStationState__ros_msg_type * ros_message = static_cast<_AssemblyStationState__ros_msg_type *>(untyped_ros_message);
  // Field name: battery_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_attached = tmp ? true : false;
  }

  // Field name: sensor_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sensor_attached = tmp ? true : false;
  }

  // Field name: regulator_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->regulator_attached = tmp ? true : false;
  }

  // Field name: pump_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pump_attached = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__AssemblyStationState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AssemblyStationState__ros_msg_type * ros_message = static_cast<const _AssemblyStationState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name battery_attached
  {
    size_t item_size = sizeof(ros_message->battery_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sensor_attached
  {
    size_t item_size = sizeof(ros_message->sensor_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name regulator_attached
  {
    size_t item_size = sizeof(ros_message->regulator_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pump_attached
  {
    size_t item_size = sizeof(ros_message->pump_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AssemblyStationState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__AssemblyStationState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__AssemblyStationState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: battery_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sensor_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: regulator_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pump_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AssemblyStationState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__AssemblyStationState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AssemblyStationState = {
  "ariac_msgs::msg",
  "AssemblyStationState",
  _AssemblyStationState__cdr_serialize,
  _AssemblyStationState__cdr_deserialize,
  _AssemblyStationState__get_serialized_size,
  _AssemblyStationState__max_serialized_size
};

static rosidl_message_type_support_t _AssemblyStationState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AssemblyStationState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, AssemblyStationState)() {
  return &_AssemblyStationState__type_support;
}

#if defined(__cplusplus)
}
#endif
