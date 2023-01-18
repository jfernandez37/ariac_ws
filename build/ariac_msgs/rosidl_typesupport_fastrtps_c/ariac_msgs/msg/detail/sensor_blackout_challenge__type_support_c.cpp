// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__struct.h"
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"
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

#include "ariac_msgs/msg/detail/challenge_condition__functions.h"  // condition
#include "ariac_msgs/msg/detail/sensors__functions.h"  // sensors_to_disable

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__ChallengeCondition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__ChallengeCondition(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, ChallengeCondition)();
size_t get_serialized_size_ariac_msgs__msg__Sensors(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__Sensors(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Sensors)();


using _SensorBlackoutChallenge__ros_msg_type = ariac_msgs__msg__SensorBlackoutChallenge;

static bool _SensorBlackoutChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorBlackoutChallenge__ros_msg_type * ros_message = static_cast<const _SensorBlackoutChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  // Field name: condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, ChallengeCondition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->condition, cdr))
    {
      return false;
    }
  }

  // Field name: sensors_to_disable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Sensors
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensors_to_disable, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SensorBlackoutChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorBlackoutChallenge__ros_msg_type * ros_message = static_cast<_SensorBlackoutChallenge__ros_msg_type *>(untyped_ros_message);
  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  // Field name: condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, ChallengeCondition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->condition))
    {
      return false;
    }
  }

  // Field name: sensors_to_disable
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, Sensors
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensors_to_disable))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorBlackoutChallenge__ros_msg_type * ros_message = static_cast<const _SensorBlackoutChallenge__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition

  current_alignment += get_serialized_size_ariac_msgs__msg__ChallengeCondition(
    &(ros_message->condition), current_alignment);
  // field.name sensors_to_disable

  current_alignment += get_serialized_size_ariac_msgs__msg__Sensors(
    &(ros_message->sensors_to_disable), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SensorBlackoutChallenge__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__ChallengeCondition(
        full_bounded, current_alignment);
    }
  }
  // member: sensors_to_disable
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__Sensors(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SensorBlackoutChallenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__SensorBlackoutChallenge(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SensorBlackoutChallenge = {
  "ariac_msgs::msg",
  "SensorBlackoutChallenge",
  _SensorBlackoutChallenge__cdr_serialize,
  _SensorBlackoutChallenge__cdr_deserialize,
  _SensorBlackoutChallenge__get_serialized_size,
  _SensorBlackoutChallenge__max_serialized_size
};

static rosidl_message_type_support_t _SensorBlackoutChallenge__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorBlackoutChallenge,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, SensorBlackoutChallenge)() {
  return &_SensorBlackoutChallenge__type_support;
}

#if defined(__cplusplus)
}
#endif
