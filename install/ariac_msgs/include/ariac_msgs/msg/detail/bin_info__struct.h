// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_INFO__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__BIN_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BIN1'.
enum
{
  ariac_msgs__msg__BinInfo__BIN1 = 1
};

/// Constant 'BIN2'.
enum
{
  ariac_msgs__msg__BinInfo__BIN2 = 2
};

/// Constant 'BIN3'.
enum
{
  ariac_msgs__msg__BinInfo__BIN3 = 3
};

/// Constant 'BIN4'.
enum
{
  ariac_msgs__msg__BinInfo__BIN4 = 4
};

/// Constant 'BIN5'.
enum
{
  ariac_msgs__msg__BinInfo__BIN5 = 5
};

/// Constant 'BIN6'.
enum
{
  ariac_msgs__msg__BinInfo__BIN6 = 6
};

/// Constant 'BIN7'.
enum
{
  ariac_msgs__msg__BinInfo__BIN7 = 7
};

/// Constant 'BIN8'.
enum
{
  ariac_msgs__msg__BinInfo__BIN8 = 8
};

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part_lot__struct.h"

// Struct defined in msg/BinInfo in the package ariac_msgs.
typedef struct ariac_msgs__msg__BinInfo
{
  uint8_t bin_number;
  ariac_msgs__msg__PartLot__Sequence parts;
} ariac_msgs__msg__BinInfo;

// Struct for a sequence of ariac_msgs__msg__BinInfo.
typedef struct ariac_msgs__msg__BinInfo__Sequence
{
  ariac_msgs__msg__BinInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__BinInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_INFO__STRUCT_H_
