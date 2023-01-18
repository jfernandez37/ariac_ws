// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/KittingTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KITTING'.
enum
{
  ariac_msgs__msg__KittingTask__KITTING = 0
};

/// Constant 'ASSEMBLY_FRONT'.
enum
{
  ariac_msgs__msg__KittingTask__ASSEMBLY_FRONT = 1
};

/// Constant 'ASSEMBLY_BACK'.
enum
{
  ariac_msgs__msg__KittingTask__ASSEMBLY_BACK = 2
};

/// Constant 'WAREHOUSE'.
enum
{
  ariac_msgs__msg__KittingTask__WAREHOUSE = 3
};

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/kitting_part__struct.h"

// Struct defined in msg/KittingTask in the package ariac_msgs.
typedef struct ariac_msgs__msg__KittingTask
{
  uint8_t agv_number;
  int8_t tray_id;
  uint8_t destination;
  ariac_msgs__msg__KittingPart__Sequence parts;
} ariac_msgs__msg__KittingTask;

// Struct for a sequence of ariac_msgs__msg__KittingTask.
typedef struct ariac_msgs__msg__KittingTask__Sequence
{
  ariac_msgs__msg__KittingTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__KittingTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__STRUCT_H_
