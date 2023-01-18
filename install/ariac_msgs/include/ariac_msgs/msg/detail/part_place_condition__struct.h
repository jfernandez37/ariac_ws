// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__struct.h"
// Member 'agv'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/PartPlaceCondition in the package ariac_msgs.
typedef struct ariac_msgs__msg__PartPlaceCondition
{
  ariac_msgs__msg__Part part;
  rosidl_runtime_c__String agv;
} ariac_msgs__msg__PartPlaceCondition;

// Struct for a sequence of ariac_msgs__msg__PartPlaceCondition.
typedef struct ariac_msgs__msg__PartPlaceCondition__Sequence
{
  ariac_msgs__msg__PartPlaceCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__PartPlaceCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__STRUCT_H_
