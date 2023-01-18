// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/KittingPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KITTING_PART__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__KITTING_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'QUADRANT1'.
enum
{
  ariac_msgs__msg__KittingPart__QUADRANT1 = 1
};

/// Constant 'QUADRANT2'.
enum
{
  ariac_msgs__msg__KittingPart__QUADRANT2 = 2
};

/// Constant 'QUADRANT3'.
enum
{
  ariac_msgs__msg__KittingPart__QUADRANT3 = 3
};

/// Constant 'QUADRANT4'.
enum
{
  ariac_msgs__msg__KittingPart__QUADRANT4 = 4
};

// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__struct.h"

// Struct defined in msg/KittingPart in the package ariac_msgs.
typedef struct ariac_msgs__msg__KittingPart
{
  ariac_msgs__msg__Part part;
  uint8_t quadrant;
} ariac_msgs__msg__KittingPart;

// Struct for a sequence of ariac_msgs__msg__KittingPart.
typedef struct ariac_msgs__msg__KittingPart__Sequence
{
  ariac_msgs__msg__KittingPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__KittingPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__KITTING_PART__STRUCT_H_
