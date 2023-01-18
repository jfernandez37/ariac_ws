// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/ConveyorParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part_lot__struct.h"

// Struct defined in msg/ConveyorParts in the package ariac_msgs.
typedef struct ariac_msgs__msg__ConveyorParts
{
  ariac_msgs__msg__PartLot__Sequence parts;
} ariac_msgs__msg__ConveyorParts;

// Struct for a sequence of ariac_msgs__msg__ConveyorParts.
typedef struct ariac_msgs__msg__ConveyorParts__Sequence
{
  ariac_msgs__msg__ConveyorParts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__ConveyorParts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__STRUCT_H_
