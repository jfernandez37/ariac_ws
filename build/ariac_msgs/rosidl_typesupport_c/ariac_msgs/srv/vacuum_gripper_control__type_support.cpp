// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ariac_msgs:srv/VacuumGripperControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ariac_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "ariac_msgs/srv/detail/vacuum_gripper_control__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _VacuumGripperControl_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VacuumGripperControl_Request_type_support_ids_t;

static const _VacuumGripperControl_Request_type_support_ids_t _VacuumGripperControl_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VacuumGripperControl_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VacuumGripperControl_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VacuumGripperControl_Request_type_support_symbol_names_t _VacuumGripperControl_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, VacuumGripperControl_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Request)),
  }
};

typedef struct _VacuumGripperControl_Request_type_support_data_t
{
  void * data[2];
} _VacuumGripperControl_Request_type_support_data_t;

static _VacuumGripperControl_Request_type_support_data_t _VacuumGripperControl_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VacuumGripperControl_Request_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_VacuumGripperControl_Request_message_typesupport_ids.typesupport_identifier[0],
  &_VacuumGripperControl_Request_message_typesupport_symbol_names.symbol_name[0],
  &_VacuumGripperControl_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VacuumGripperControl_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VacuumGripperControl_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, VacuumGripperControl_Request)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::VacuumGripperControl_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _VacuumGripperControl_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VacuumGripperControl_Response_type_support_ids_t;

static const _VacuumGripperControl_Response_type_support_ids_t _VacuumGripperControl_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VacuumGripperControl_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VacuumGripperControl_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VacuumGripperControl_Response_type_support_symbol_names_t _VacuumGripperControl_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, VacuumGripperControl_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Response)),
  }
};

typedef struct _VacuumGripperControl_Response_type_support_data_t
{
  void * data[2];
} _VacuumGripperControl_Response_type_support_data_t;

static _VacuumGripperControl_Response_type_support_data_t _VacuumGripperControl_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VacuumGripperControl_Response_message_typesupport_map = {
  2,
  "ariac_msgs",
  &_VacuumGripperControl_Response_message_typesupport_ids.typesupport_identifier[0],
  &_VacuumGripperControl_Response_message_typesupport_symbol_names.symbol_name[0],
  &_VacuumGripperControl_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t VacuumGripperControl_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VacuumGripperControl_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, VacuumGripperControl_Response)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::VacuumGripperControl_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ariac_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _VacuumGripperControl_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _VacuumGripperControl_type_support_ids_t;

static const _VacuumGripperControl_type_support_ids_t _VacuumGripperControl_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _VacuumGripperControl_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _VacuumGripperControl_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _VacuumGripperControl_type_support_symbol_names_t _VacuumGripperControl_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ariac_msgs, srv, VacuumGripperControl)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl)),
  }
};

typedef struct _VacuumGripperControl_type_support_data_t
{
  void * data[2];
} _VacuumGripperControl_type_support_data_t;

static _VacuumGripperControl_type_support_data_t _VacuumGripperControl_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _VacuumGripperControl_service_typesupport_map = {
  2,
  "ariac_msgs",
  &_VacuumGripperControl_service_typesupport_ids.typesupport_identifier[0],
  &_VacuumGripperControl_service_typesupport_symbol_names.symbol_name[0],
  &_VacuumGripperControl_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t VacuumGripperControl_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_VacuumGripperControl_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ariac_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_ariac_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ariac_msgs, srv, VacuumGripperControl)() {
  return &::ariac_msgs::srv::rosidl_typesupport_c::VacuumGripperControl_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
