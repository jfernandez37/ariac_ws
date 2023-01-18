// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOTS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ROBOTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Robots in the package ariac_msgs.
typedef struct ariac_msgs__msg__Robots
{
  bool floor_robot;
  bool ceiling_robot;
} ariac_msgs__msg__Robots;

// Struct for a sequence of ariac_msgs__msg__Robots.
typedef struct ariac_msgs__msg__Robots__Sequence
{
  ariac_msgs__msg__Robots * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Robots__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOTS__STRUCT_H_
