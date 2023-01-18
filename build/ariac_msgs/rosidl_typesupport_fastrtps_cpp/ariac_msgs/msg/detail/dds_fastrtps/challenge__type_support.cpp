// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/challenge__struct.hpp"

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
bool cdr_serialize(
  const ariac_msgs::msg::FaultyPartChallenge &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::FaultyPartChallenge &);
size_t get_serialized_size(
  const ariac_msgs::msg::FaultyPartChallenge &,
  size_t current_alignment);
size_t
max_serialized_size_FaultyPartChallenge(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::DroppedPartChallenge &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::DroppedPartChallenge &);
size_t get_serialized_size(
  const ariac_msgs::msg::DroppedPartChallenge &,
  size_t current_alignment);
size_t
max_serialized_size_DroppedPartChallenge(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::SensorBlackoutChallenge &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::SensorBlackoutChallenge &);
size_t get_serialized_size(
  const ariac_msgs::msg::SensorBlackoutChallenge &,
  size_t current_alignment);
size_t
max_serialized_size_SensorBlackoutChallenge(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::RobotMalfunctionChallenge &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::RobotMalfunctionChallenge &);
size_t get_serialized_size(
  const ariac_msgs::msg::RobotMalfunctionChallenge &,
  size_t current_alignment);
size_t
max_serialized_size_RobotMalfunctionChallenge(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_serialize(
  const ariac_msgs::msg::Challenge & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: faulty_part_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.faulty_part_challenge,
    cdr);
  // Member: dropped_part_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dropped_part_challenge,
    cdr);
  // Member: sensor_blackout_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sensor_blackout_challenge,
    cdr);
  // Member: robot_malfunction_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.robot_malfunction_challenge,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::Challenge & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: faulty_part_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.faulty_part_challenge);

  // Member: dropped_part_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dropped_part_challenge);

  // Member: sensor_blackout_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sensor_blackout_challenge);

  // Member: robot_malfunction_challenge
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.robot_malfunction_challenge);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::Challenge & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.type.size() + 1);
  // Member: faulty_part_challenge

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.faulty_part_challenge, current_alignment);
  // Member: dropped_part_challenge

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dropped_part_challenge, current_alignment);
  // Member: sensor_blackout_challenge

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sensor_blackout_challenge, current_alignment);
  // Member: robot_malfunction_challenge

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.robot_malfunction_challenge, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_Challenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: faulty_part_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_FaultyPartChallenge(
        full_bounded, current_alignment);
    }
  }

  // Member: dropped_part_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DroppedPartChallenge(
        full_bounded, current_alignment);
    }
  }

  // Member: sensor_blackout_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SensorBlackoutChallenge(
        full_bounded, current_alignment);
    }
  }

  // Member: robot_malfunction_challenge
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RobotMalfunctionChallenge(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Challenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::Challenge *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Challenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::Challenge *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Challenge__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::Challenge *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Challenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Challenge(full_bounded, 0);
}

static message_type_support_callbacks_t _Challenge__callbacks = {
  "ariac_msgs::msg",
  "Challenge",
  _Challenge__cdr_serialize,
  _Challenge__cdr_deserialize,
  _Challenge__get_serialized_size,
  _Challenge__max_serialized_size
};

static rosidl_message_type_support_t _Challenge__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Challenge__callbacks,
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
get_message_type_support_handle<ariac_msgs::msg::Challenge>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_Challenge__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, Challenge)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_Challenge__handle;
}

#ifdef __cplusplus
}
#endif
