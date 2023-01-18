// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Order.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ORDER__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ORDER__STRUCT_H_

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
  ariac_msgs__msg__Order__KITTING = 0
};

/// Constant 'ASSEMBLY'.
enum
{
  ariac_msgs__msg__Order__ASSEMBLY = 1
};

/// Constant 'COMBINED'.
enum
{
  ariac_msgs__msg__Order__COMBINED = 2
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'kitting_task'
#include "ariac_msgs/msg/detail/kitting_task__struct.h"
// Member 'assembly_task'
#include "ariac_msgs/msg/detail/assembly_task__struct.h"
// Member 'combined_task'
#include "ariac_msgs/msg/detail/combined_task__struct.h"

// Struct defined in msg/Order in the package ariac_msgs.
typedef struct ariac_msgs__msg__Order
{
  rosidl_runtime_c__String id;
  uint8_t type;
  bool priority;
  ariac_msgs__msg__KittingTask kitting_task;
  ariac_msgs__msg__AssemblyTask assembly_task;
  ariac_msgs__msg__CombinedTask combined_task;
} ariac_msgs__msg__Order;

// Struct for a sequence of ariac_msgs__msg__Order.
typedef struct ariac_msgs__msg__Order__Sequence
{
  ariac_msgs__msg__Order * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Order__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ORDER__STRUCT_H_
