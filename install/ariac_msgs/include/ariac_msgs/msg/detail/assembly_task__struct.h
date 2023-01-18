// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AS1'.
enum
{
  ariac_msgs__msg__AssemblyTask__AS1 = 1
};

/// Constant 'AS2'.
enum
{
  ariac_msgs__msg__AssemblyTask__AS2 = 2
};

/// Constant 'AS3'.
enum
{
  ariac_msgs__msg__AssemblyTask__AS3 = 3
};

/// Constant 'AS4'.
enum
{
  ariac_msgs__msg__AssemblyTask__AS4 = 4
};

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/assembly_part__struct.h"

// Struct defined in msg/AssemblyTask in the package ariac_msgs.
typedef struct ariac_msgs__msg__AssemblyTask
{
  uint8_t agv_number;
  uint8_t station;
  ariac_msgs__msg__AssemblyPart__Sequence parts;
} ariac_msgs__msg__AssemblyTask;

// Struct for a sequence of ariac_msgs__msg__AssemblyTask.
typedef struct ariac_msgs__msg__AssemblyTask__Sequence
{
  ariac_msgs__msg__AssemblyTask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__AssemblyTask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__STRUCT_H_
