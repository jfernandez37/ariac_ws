// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/AGVStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__STRUCT_H_

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
  ariac_msgs__msg__AGVStatus__KITTING = 0
};

/// Constant 'ASSEMBLY_FRONT'.
enum
{
  ariac_msgs__msg__AGVStatus__ASSEMBLY_FRONT = 1
};

/// Constant 'ASSEMBLY_BACK'.
enum
{
  ariac_msgs__msg__AGVStatus__ASSEMBLY_BACK = 2
};

/// Constant 'UNKNOWN'.
enum
{
  ariac_msgs__msg__AGVStatus__UNKNOWN = 99
};

// Struct defined in msg/AGVStatus in the package ariac_msgs.
typedef struct ariac_msgs__msg__AGVStatus
{
  int8_t location;
  double position;
  double velocity;
} ariac_msgs__msg__AGVStatus;

// Struct for a sequence of ariac_msgs__msg__AGVStatus.
typedef struct ariac_msgs__msg__AGVStatus__Sequence
{
  ariac_msgs__msg__AGVStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__AGVStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__STRUCT_H_
