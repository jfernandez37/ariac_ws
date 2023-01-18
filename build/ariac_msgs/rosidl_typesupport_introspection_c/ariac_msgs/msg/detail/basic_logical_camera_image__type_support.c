// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/BasicLogicalCameraImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/basic_logical_camera_image__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/basic_logical_camera_image__functions.h"
#include "ariac_msgs/msg/detail/basic_logical_camera_image__struct.h"


// Include directives for member types
// Member `part_poses`
// Member `tray_poses`
// Member `sensor_pose`
#include "geometry_msgs/msg/pose.h"
// Member `part_poses`
// Member `tray_poses`
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__BasicLogicalCameraImage__init(message_memory);
}

void BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_fini_function(void * message_memory)
{
  ariac_msgs__msg__BasicLogicalCameraImage__fini(message_memory);
}

size_t BasicLogicalCameraImage__rosidl_typesupport_introspection_c__size_function__Pose__part_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_const_function__Pose__part_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_function__Pose__part_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BasicLogicalCameraImage__rosidl_typesupport_introspection_c__resize_function__Pose__part_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t BasicLogicalCameraImage__rosidl_typesupport_introspection_c__size_function__Pose__tray_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_const_function__Pose__tray_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_function__Pose__tray_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BasicLogicalCameraImage__rosidl_typesupport_introspection_c__resize_function__Pose__tray_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_member_array[3] = {
  {
    "part_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__BasicLogicalCameraImage, part_poses),  // bytes offset in struct
    NULL,  // default value
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__size_function__Pose__part_poses,  // size() function pointer
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_const_function__Pose__part_poses,  // get_const(index) function pointer
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_function__Pose__part_poses,  // get(index) function pointer
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__resize_function__Pose__part_poses  // resize(index) function pointer
  },
  {
    "tray_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__BasicLogicalCameraImage, tray_poses),  // bytes offset in struct
    NULL,  // default value
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__size_function__Pose__tray_poses,  // size() function pointer
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_const_function__Pose__tray_poses,  // get_const(index) function pointer
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__get_function__Pose__tray_poses,  // get(index) function pointer
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__resize_function__Pose__tray_poses  // resize(index) function pointer
  },
  {
    "sensor_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__BasicLogicalCameraImage, sensor_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_members = {
  "ariac_msgs__msg",  // message namespace
  "BasicLogicalCameraImage",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__msg__BasicLogicalCameraImage),
  BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_member_array,  // message members
  BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_init_function,  // function to initialize message memory (memory has to be allocated)
  BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_type_support_handle = {
  0,
  &BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, BasicLogicalCameraImage)() {
  BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_type_support_handle.typesupport_identifier) {
    BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BasicLogicalCameraImage__rosidl_typesupport_introspection_c__BasicLogicalCameraImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
