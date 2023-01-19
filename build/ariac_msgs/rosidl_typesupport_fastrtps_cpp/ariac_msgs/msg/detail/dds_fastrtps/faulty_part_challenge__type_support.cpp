// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/faulty_part_challenge__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.hpp"

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
  const ariac_msgs::msg::FaultyPartChallenge & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: order_id
  cdr << ros_message.order_id;
  // Member: quadrant1
  cdr << (ros_message.quadrant1 ? true : false);
  // Member: quadrant2
  cdr << (ros_message.quadrant2 ? true : false);
  // Member: quadrant3
  cdr << (ros_message.quadrant3 ? true : false);
  // Member: quadrant4
  cdr << (ros_message.quadrant4 ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::FaultyPartChallenge & ros_message)
{
  // Member: order_id
  cdr >> ros_message.order_id;

  // Member: quadrant1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.quadrant1 = tmp ? true : false;
  }

  // Member: quadrant2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.quadrant2 = tmp ? true : false;
  }

  // Member: quadrant3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.quadrant3 = tmp ? true : false;
  }

  // Member: quadrant4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.quadrant4 = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::FaultyPartChallenge & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: order_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.order_id.size() + 1);
  // Member: quadrant1
  {
    size_t item_size = sizeof(ros_message.quadrant1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quadrant2
  {
    size_t item_size = sizeof(ros_message.quadrant2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quadrant3
  {
    size_t item_size = sizeof(ros_message.quadrant3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quadrant4
  {
    size_t item_size = sizeof(ros_message.quadrant4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_FaultyPartChallenge(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: order_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: quadrant1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quadrant2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quadrant3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: quadrant4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _FaultyPartChallenge__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::FaultyPartChallenge *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FaultyPartChallenge__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::FaultyPartChallenge *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FaultyPartChallenge__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::FaultyPartChallenge *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FaultyPartChallenge__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FaultyPartChallenge(full_bounded, 0);
}

static message_type_support_callbacks_t _FaultyPartChallenge__callbacks = {
  "ariac_msgs::msg",
  "FaultyPartChallenge",
  _FaultyPartChallenge__cdr_serialize,
  _FaultyPartChallenge__cdr_deserialize,
  _FaultyPartChallenge__get_serialized_size,
  _FaultyPartChallenge__max_serialized_size
};

static rosidl_message_type_support_t _FaultyPartChallenge__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FaultyPartChallenge__callbacks,
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
get_message_type_support_handle<ariac_msgs::msg::FaultyPartChallenge>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_FaultyPartChallenge__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, FaultyPartChallenge)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_FaultyPartChallenge__handle;
}

#ifdef __cplusplus
}
#endif
