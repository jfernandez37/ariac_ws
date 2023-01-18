// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/challenge__struct.h"
#include "ariac_msgs/msg/detail/challenge__functions.h"
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

#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"  // dropped_part_challenge
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"  // faulty_part_challenge
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"  // robot_malfunction_challenge
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"  // sensor_blackout_challenge
#include "rosidl_runtime_c/string.h"  // type
#include "rosidl_runtime_c/string_functions.h"  // type

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge)();
size_t get_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge)();
size_t get_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge)();
size_t get_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge)();


using _Challenge__ros_msg_type = ariac_msgs__msg__Challenge;

static bool _Challenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Challenge__ros_msg_type * ros_message = static_cast<const _Challenge__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: faulty_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->faulty_part_challenge, cdr))
    {
      return false;
    }
  }

  // Field name: dropped_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->dropped_part_challenge, cdr))
    {
      return false;
    }
  }

  // Field name: sensor_blackout_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensor_blackout_challenge, cdr))
    {
      return false;
    }
  }

  // Field name: robot_malfunction_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_malfunction_challenge, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Challenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Challenge__ros_msg_type * ros_message = static_cast<_Challenge__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: faulty_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, FaultyPartChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->faulty_part_challenge))
    {
      return false;
    }
  }

  // Field name: dropped_part_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, DroppedPartChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->dropped_part_challenge))
    {
      return false;
    }
  }

  // Field name: sensor_blackout_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensor_blackout_challenge))
    {
      return false;
    }
  }

  // Field name: robot_malfunction_challenge
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, RobotMalfunctionChallenge
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_malfunction_challenge))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__Challenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Challenge__ros_msg_type * ros_message = static_cast<const _Challenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name faulty_part_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
    &(ros_message->faulty_part_challenge), current_alignment);
  // field.name dropped_part_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
    &(ros_message->dropped_part_challenge), current_alignment);
  // field.name sensor_blackout_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
    &(ros_message->sensor_blackout_challenge), current_alignment);
  // field.name robot_malfunction_challenge

  current_alignment += get_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
    &(ros_message->robot_malfunction_challenge), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Challenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__Challenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__Challenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: faulty_part_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__FaultyPartChallenge(
        full_bounded, current_alignment);
    }
  }
  // member: dropped_part_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__DroppedPartChallenge(
        full_bounded, current_alignment);
    }
  }
  // member: sensor_blackout_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
        full_bounded, current_alignment);
    }
  }
  // member: robot_malfunction_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__RobotMalfunctionChallenge(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Challenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__Challenge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Challenge = {
  "ariac_msgs::msg",
  "Challenge",
  _Challenge__cdr_serialize,
  _Challenge__cdr_deserialize,
  _Challenge__get_serialized_size,
  _Challenge__max_serialized_size
};

static rosidl_message_type_support_t _Challenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Challenge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Challenge)() {
  return &_Challenge__type_support;
}

#if defined(__cplusplus)
}
#endif
