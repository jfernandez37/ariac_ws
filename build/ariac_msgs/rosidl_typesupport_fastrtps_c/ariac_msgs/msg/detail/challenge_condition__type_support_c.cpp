// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/ChallengeCondition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge_condition__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/challenge_condition__struct.h"
#include "ariac_msgs/msg/detail/challenge_condition__functions.h"
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

#include "ariac_msgs/msg/detail/part_place_condition__functions.h"  // part_place_condition
#include "ariac_msgs/msg/detail/time_condition__functions.h"  // time_condition
#include "rosidl_runtime_c/string.h"  // type
#include "rosidl_runtime_c/string_functions.h"  // type

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__PartPlaceCondition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__PartPlaceCondition(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, PartPlaceCondition)();
size_t get_serialized_size_ariac_msgs__msg__TimeCondition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__TimeCondition(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, TimeCondition)();


using _ChallengeCondition__ros_msg_type = ariac_msgs__msg__ChallengeCondition;

static bool _ChallengeCondition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChallengeCondition__ros_msg_type * ros_message = static_cast<const _ChallengeCondition__ros_msg_type *>(untyped_ros_message);
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

  // Field name: time_condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, TimeCondition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->time_condition, cdr))
    {
      return false;
    }
  }

  // Field name: part_place_condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, PartPlaceCondition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->part_place_condition, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ChallengeCondition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChallengeCondition__ros_msg_type * ros_message = static_cast<_ChallengeCondition__ros_msg_type *>(untyped_ros_message);
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

  // Field name: time_condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, TimeCondition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->time_condition))
    {
      return false;
    }
  }

  // Field name: part_place_condition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, PartPlaceCondition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->part_place_condition))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__ChallengeCondition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChallengeCondition__ros_msg_type * ros_message = static_cast<const _ChallengeCondition__ros_msg_type *>(untyped_ros_message);
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
  // field.name time_condition

  current_alignment += get_serialized_size_ariac_msgs__msg__TimeCondition(
    &(ros_message->time_condition), current_alignment);
  // field.name part_place_condition

  current_alignment += get_serialized_size_ariac_msgs__msg__PartPlaceCondition(
    &(ros_message->part_place_condition), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ChallengeCondition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__ChallengeCondition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__ChallengeCondition(
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
  // member: time_condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__TimeCondition(
        full_bounded, current_alignment);
    }
  }
  // member: part_place_condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__PartPlaceCondition(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ChallengeCondition__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__ChallengeCondition(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ChallengeCondition = {
  "ariac_msgs::msg",
  "ChallengeCondition",
  _ChallengeCondition__cdr_serialize,
  _ChallengeCondition__cdr_deserialize,
  _ChallengeCondition__get_serialized_size,
  _ChallengeCondition__max_serialized_size
};

static rosidl_message_type_support_t _ChallengeCondition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChallengeCondition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, ChallengeCondition)() {
  return &_ChallengeCondition__type_support;
}

#if defined(__cplusplus)
}
#endif
