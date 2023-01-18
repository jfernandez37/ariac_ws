// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bins'
#include "ariac_msgs/msg/detail/bin_info__struct.h"

// Struct defined in msg/BinParts in the package ariac_msgs.
typedef struct ariac_msgs__msg__BinParts
{
  ariac_msgs__msg__BinInfo__Sequence bins;
} ariac_msgs__msg__BinParts;

// Struct for a sequence of ariac_msgs__msg__BinParts.
typedef struct ariac_msgs__msg__BinParts__Sequence
{
  ariac_msgs__msg__BinParts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__BinParts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__STRUCT_H_
