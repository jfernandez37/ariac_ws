// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:srv/MoveAGV.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__STRUCT_H_
#define ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__STRUCT_H_

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
  ariac_msgs__srv__MoveAGV_Request__KITTING = 0
};

/// Constant 'ASSEMBLY_FRONT'.
enum
{
  ariac_msgs__srv__MoveAGV_Request__ASSEMBLY_FRONT = 1
};

/// Constant 'ASSEMBLY_BACK'.
enum
{
  ariac_msgs__srv__MoveAGV_Request__ASSEMBLY_BACK = 2
};

/// Constant 'WAREHOUSE'.
enum
{
  ariac_msgs__srv__MoveAGV_Request__WAREHOUSE = 3
};

// Struct defined in srv/MoveAGV in the package ariac_msgs.
typedef struct ariac_msgs__srv__MoveAGV_Request
{
  int8_t location;
} ariac_msgs__srv__MoveAGV_Request;

// Struct for a sequence of ariac_msgs__srv__MoveAGV_Request.
typedef struct ariac_msgs__srv__MoveAGV_Request__Sequence
{
  ariac_msgs__srv__MoveAGV_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__MoveAGV_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/MoveAGV in the package ariac_msgs.
typedef struct ariac_msgs__srv__MoveAGV_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ariac_msgs__srv__MoveAGV_Response;

// Struct for a sequence of ariac_msgs__srv__MoveAGV_Response.
typedef struct ariac_msgs__srv__MoveAGV_Response__Sequence
{
  ariac_msgs__srv__MoveAGV_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__MoveAGV_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__STRUCT_H_
