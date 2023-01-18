// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Sensors in the package ariac_msgs.
typedef struct ariac_msgs__msg__Sensors
{
  bool break_beam;
  bool proximity;
  bool laser_profiler;
  bool lidar;
  bool camera;
  bool logical_camera;
} ariac_msgs__msg__Sensors;

// Struct for a sequence of ariac_msgs__msg__Sensors.
typedef struct ariac_msgs__msg__Sensors__Sequence
{
  ariac_msgs__msg__Sensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Sensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_
