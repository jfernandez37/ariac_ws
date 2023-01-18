// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:srv/ChangeGripperColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/srv/detail/change_gripper_color__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/srv/detail/change_gripper_color__functions.h"
#include "ariac_msgs/srv/detail/change_gripper_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__ChangeGripperColor_Request__init(message_memory);
}

void ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_fini_function(void * message_memory)
{
  ariac_msgs__srv__ChangeGripperColor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_member_array[4] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ChangeGripperColor_Request, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ChangeGripperColor_Request, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ChangeGripperColor_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alpha",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ChangeGripperColor_Request, alpha),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_members = {
  "ariac_msgs__srv",  // message namespace
  "ChangeGripperColor_Request",  // message name
  4,  // number of fields
  sizeof(ariac_msgs__srv__ChangeGripperColor_Request),
  ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_member_array,  // message members
  ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_type_support_handle = {
  0,
  &ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor_Request)() {
  if (!ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_type_support_handle.typesupport_identifier) {
    ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChangeGripperColor_Request__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ariac_msgs/srv/detail/change_gripper_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper_color__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__ChangeGripperColor_Response__init(message_memory);
}

void ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_fini_function(void * message_memory)
{
  ariac_msgs__srv__ChangeGripperColor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ChangeGripperColor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_members = {
  "ariac_msgs__srv",  // message namespace
  "ChangeGripperColor_Response",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__ChangeGripperColor_Response),
  ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_member_array,  // message members
  ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_type_support_handle = {
  0,
  &ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor_Response)() {
  if (!ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_type_support_handle.typesupport_identifier) {
    ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChangeGripperColor_Response__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/change_gripper_color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_members = {
  "ariac_msgs__srv",  // service namespace
  "ChangeGripperColor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_Request_message_type_support_handle,
  NULL  // response message
  // ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_Response_message_type_support_handle
};

static rosidl_service_type_support_t ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_type_support_handle = {
  0,
  &ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor)() {
  if (!ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ChangeGripperColor_Response)()->data;
  }

  return &ariac_msgs__srv__detail__change_gripper_color__rosidl_typesupport_introspection_c__ChangeGripperColor_service_type_support_handle;
}
