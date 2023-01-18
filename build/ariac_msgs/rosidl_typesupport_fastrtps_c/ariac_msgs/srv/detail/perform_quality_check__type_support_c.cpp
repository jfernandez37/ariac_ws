// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/srv/detail/perform_quality_check__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/srv/detail/perform_quality_check__struct.h"
#include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
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

#include "rosidl_runtime_c/string.h"  // task_id
#include "rosidl_runtime_c/string_functions.h"  // task_id

// forward declare type support functions


using _PerformQualityCheck_Request__ros_msg_type = ariac_msgs__srv__PerformQualityCheck_Request;

static bool _PerformQualityCheck_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PerformQualityCheck_Request__ros_msg_type * ros_message = static_cast<const _PerformQualityCheck_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
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

  return true;
}

static bool _PerformQualityCheck_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PerformQualityCheck_Request__ros_msg_type * ros_message = static_cast<_PerformQualityCheck_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__srv__PerformQualityCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerformQualityCheck_Request__ros_msg_type * ros_message = static_cast<const _PerformQualityCheck_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _PerformQualityCheck_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__srv__PerformQualityCheck_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__srv__PerformQualityCheck_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: task_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PerformQualityCheck_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__srv__PerformQualityCheck_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PerformQualityCheck_Request = {
  "ariac_msgs::srv",
  "PerformQualityCheck_Request",
  _PerformQualityCheck_Request__cdr_serialize,
  _PerformQualityCheck_Request__cdr_deserialize,
  _PerformQualityCheck_Request__get_serialized_size,
  _PerformQualityCheck_Request__max_serialized_size
};

static rosidl_message_type_support_t _PerformQualityCheck_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PerformQualityCheck_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, PerformQualityCheck_Request)() {
  return &_PerformQualityCheck_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__struct.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "ariac_msgs/msg/detail/quality_issue__functions.h"  // quadrant1, quadrant2, quadrant3, quadrant4

// forward declare type support functions
size_t get_serialized_size_ariac_msgs__msg__QualityIssue(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ariac_msgs__msg__QualityIssue(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue)();


using _PerformQualityCheck_Response__ros_msg_type = ariac_msgs__srv__PerformQualityCheck_Response;

static bool _PerformQualityCheck_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PerformQualityCheck_Response__ros_msg_type * ros_message = static_cast<const _PerformQualityCheck_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid_id
  {
    cdr << (ros_message->valid_id ? true : false);
  }

  // Field name: all_passed
  {
    cdr << (ros_message->all_passed ? true : false);
  }

  // Field name: incorrect_tray
  {
    cdr << (ros_message->incorrect_tray ? true : false);
  }

  // Field name: quadrant1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->quadrant1, cdr))
    {
      return false;
    }
  }

  // Field name: quadrant2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->quadrant2, cdr))
    {
      return false;
    }
  }

  // Field name: quadrant3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->quadrant3, cdr))
    {
      return false;
    }
  }

  // Field name: quadrant4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->quadrant4, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PerformQualityCheck_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PerformQualityCheck_Response__ros_msg_type * ros_message = static_cast<_PerformQualityCheck_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid_id = tmp ? true : false;
  }

  // Field name: all_passed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->all_passed = tmp ? true : false;
  }

  // Field name: incorrect_tray
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->incorrect_tray = tmp ? true : false;
  }

  // Field name: quadrant1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->quadrant1))
    {
      return false;
    }
  }

  // Field name: quadrant2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->quadrant2))
    {
      return false;
    }
  }

  // Field name: quadrant3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->quadrant3))
    {
      return false;
    }
  }

  // Field name: quadrant4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ariac_msgs, msg, QualityIssue
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->quadrant4))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t get_serialized_size_ariac_msgs__srv__PerformQualityCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerformQualityCheck_Response__ros_msg_type * ros_message = static_cast<const _PerformQualityCheck_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name valid_id
  {
    size_t item_size = sizeof(ros_message->valid_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name all_passed
  {
    size_t item_size = sizeof(ros_message->all_passed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name incorrect_tray
  {
    size_t item_size = sizeof(ros_message->incorrect_tray);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quadrant1

  current_alignment += get_serialized_size_ariac_msgs__msg__QualityIssue(
    &(ros_message->quadrant1), current_alignment);
  // field.name quadrant2

  current_alignment += get_serialized_size_ariac_msgs__msg__QualityIssue(
    &(ros_message->quadrant2), current_alignment);
  // field.name quadrant3

  current_alignment += get_serialized_size_ariac_msgs__msg__QualityIssue(
    &(ros_message->quadrant3), current_alignment);
  // field.name quadrant4

  current_alignment += get_serialized_size_ariac_msgs__msg__QualityIssue(
    &(ros_message->quadrant4), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PerformQualityCheck_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ariac_msgs__srv__PerformQualityCheck_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ariac_msgs
size_t max_serialized_size_ariac_msgs__srv__PerformQualityCheck_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: valid_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: all_passed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: incorrect_tray
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quadrant1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__QualityIssue(
        full_bounded, current_alignment);
    }
  }
  // member: quadrant2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__QualityIssue(
        full_bounded, current_alignment);
    }
  }
  // member: quadrant3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__QualityIssue(
        full_bounded, current_alignment);
    }
  }
  // member: quadrant4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ariac_msgs__msg__QualityIssue(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PerformQualityCheck_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ariac_msgs__srv__PerformQualityCheck_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PerformQualityCheck_Response = {
  "ariac_msgs::srv",
  "PerformQualityCheck_Response",
  _PerformQualityCheck_Response__cdr_serialize,
  _PerformQualityCheck_Response__cdr_deserialize,
  _PerformQualityCheck_Response__get_serialized_size,
  _PerformQualityCheck_Response__max_serialized_size
};

static rosidl_message_type_support_t _PerformQualityCheck_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PerformQualityCheck_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, PerformQualityCheck_Response)() {
  return &_PerformQualityCheck_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ariac_msgs/srv/perform_quality_check.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PerformQualityCheck__callbacks = {
  "ariac_msgs::srv",
  "PerformQualityCheck",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, PerformQualityCheck_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, PerformQualityCheck_Response)(),
};

static rosidl_service_type_support_t PerformQualityCheck__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PerformQualityCheck__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, PerformQualityCheck)() {
  return &PerformQualityCheck__handle;
}

#if defined(__cplusplus)
}
#endif
