// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:srv/VacuumGripperControl.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CONTROL__STRUCT_H_
#define ARIAC_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/VacuumGripperControl in the package ariac_msgs.
typedef struct ariac_msgs__srv__VacuumGripperControl_Request
{
  bool enable;
} ariac_msgs__srv__VacuumGripperControl_Request;

// Struct for a sequence of ariac_msgs__srv__VacuumGripperControl_Request.
typedef struct ariac_msgs__srv__VacuumGripperControl_Request__Sequence
{
  ariac_msgs__srv__VacuumGripperControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__VacuumGripperControl_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/VacuumGripperControl in the package ariac_msgs.
typedef struct ariac_msgs__srv__VacuumGripperControl_Response
{
  bool success;
} ariac_msgs__srv__VacuumGripperControl_Response;

// Struct for a sequence of ariac_msgs__srv__VacuumGripperControl_Response.
typedef struct ariac_msgs__srv__VacuumGripperControl_Response__Sequence
{
  ariac_msgs__srv__VacuumGripperControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__VacuumGripperControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__SRV__DETAIL__VACUUM_GRIPPER_CONTROL__STRUCT_H_
