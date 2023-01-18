// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/AssemblyStationState.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/assembly_station_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/assembly_station_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ariac_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_serialize(
  const ariac_msgs::msg::AssemblyStationState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: battery_attached
  cdr << (ros_message.battery_attached ? true : false);
  // Member: sensor_attached
  cdr << (ros_message.sensor_attached ? true : false);
  // Member: regulator_attached
  cdr << (ros_message.regulator_attached ? true : false);
  // Member: pump_attached
  cdr << (ros_message.pump_attached ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::AssemblyStationState & ros_message)
{
  // Member: battery_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_attached = tmp ? true : false;
  }

  // Member: sensor_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sensor_attached = tmp ? true : false;
  }

  // Member: regulator_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.regulator_attached = tmp ? true : false;
  }

  // Member: pump_attached
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pump_attached = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::AssemblyStationState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: battery_attached
  {
    size_t item_size = sizeof(ros_message.battery_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sensor_attached
  {
    size_t item_size = sizeof(ros_message.sensor_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: regulator_attached
  {
    size_t item_size = sizeof(ros_message.regulator_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pump_attached
  {
    size_t item_size = sizeof(ros_message.pump_attached);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_AssemblyStationState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: battery_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sensor_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: regulator_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pump_attached
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AssemblyStationState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::AssemblyStationState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AssemblyStationState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::AssemblyStationState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AssemblyStationState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::AssemblyStationState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AssemblyStationState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AssemblyStationState(full_bounded, 0);
}

static message_type_support_callbacks_t _AssemblyStationState__callbacks = {
  "ariac_msgs::msg",
  "AssemblyStationState",
  _AssemblyStationState__cdr_serialize,
  _AssemblyStationState__cdr_deserialize,
  _AssemblyStationState__get_serialized_size,
  _AssemblyStationState__max_serialized_size
};

static rosidl_message_type_support_t _AssemblyStationState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AssemblyStationState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ariac_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::AssemblyStationState>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_AssemblyStationState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, AssemblyStationState)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_AssemblyStationState__handle;
}

#ifdef __cplusplus
}
#endif
