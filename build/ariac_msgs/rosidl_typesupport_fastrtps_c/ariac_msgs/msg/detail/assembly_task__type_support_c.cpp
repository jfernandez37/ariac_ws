// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/assembly_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/msg/detail/assembly_task__struct.h"
#include "ariac_msgs/msg/detail/assembly_task__functions.h"
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

#include "ariac_msgs/msg/detail/assembly_part__functions.h"  // parts
#include "rosidl_runtime_c/primitives_sequence.h"  // agv_numbers
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // agv_numbers

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__AssemblyPart(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__AssemblyPart(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, AssemblyPart)();


using _AssemblyTask__ros_msg_type = ariac_msgs__msg__AssemblyTask;

static bool _AssemblyTask__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AssemblyTask__ros_msg_type * ros_message = static_cast<const _AssemblyTask__ros_msg_type *>(untyped_ros_message);
  // Field name: agv_numbers
  {
    size_t size = ros_message->agv_numbers.size;
    auto array_ptr = ros_message->agv_numbers.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: station
  {
    cdr << ros_message->station;
  }

  // Field name: parts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, AssemblyPart
      )()->data);
    size_t size = ros_message->parts.size;
    auto array_ptr = ros_message->parts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _AssemblyTask__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AssemblyTask__ros_msg_type * ros_message = static_cast<_AssemblyTask__ros_msg_type *>(untyped_ros_message);
  // Field name: agv_numbers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->agv_numbers.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->agv_numbers);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->agv_numbers, size)) {
      fprintf(stderr, "failed to create array for field 'agv_numbers'");
      return false;
    }
    auto array_ptr = ros_message->agv_numbers.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: station
  {
    cdr >> ros_message->station;
  }

  // Field name: parts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, AssemblyPart
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->parts.data) {
      ariac_msgs__msg__AssemblyPart__Sequence__fini(&ros_message->parts);
    }
    if (!ariac_msgs__msg__AssemblyPart__Sequence__init(&ros_message->parts, size)) {
      fprintf(stderr, "failed to create array for field 'parts'");
      return false;
    }
    auto array_ptr = ros_message->parts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__msg__AssemblyTask(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AssemblyTask__ros_msg_type * ros_message = static_cast<const _AssemblyTask__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name agv_numbers
  {
    size_t array_size = ros_message->agv_numbers.size;
    auto array_ptr = ros_message->agv_numbers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name station
  {
    size_t item_size = sizeof(ros_message->station);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parts
  {
    size_t array_size = ros_message->parts.size;
    auto array_ptr = ros_message->parts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ariac_msgs__msg__AssemblyPart(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AssemblyTask__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__msg__AssemblyTask(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__msg__AssemblyTask(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: agv_numbers
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: station
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parts
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__AssemblyPart(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AssemblyTask__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__msg__AssemblyTask(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AssemblyTask = {
  "ariac_msgs::msg",
  "AssemblyTask",
  _AssemblyTask__cdr_serialize,
  _AssemblyTask__cdr_deserialize,
  _AssemblyTask__get_serialized_size,
  _AssemblyTask__max_serialized_size
};

static rosidl_message_type_support_t _AssemblyTask__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AssemblyTask,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, AssemblyTask)() {
  return &_AssemblyTask__type_support;
}

#if defined(__cplusplus)
}
#endif
