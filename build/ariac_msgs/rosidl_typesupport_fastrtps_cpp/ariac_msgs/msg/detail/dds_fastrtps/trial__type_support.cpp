// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/trial__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/trial__struct.hpp"

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
  const ariac_msgs::msg::Order &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::Order &);
size_t get_serialized_size(
  const ariac_msgs::msg::Order &,
  size_t current_alignment);
size_t
max_serialized_size_Order(
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
  const ariac_msgs::msg::OrderCondition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::OrderCondition &);
size_t get_serialized_size(
  const ariac_msgs::msg::OrderCondition &,
  size_t current_alignment);
size_t
max_serialized_size_OrderCondition(
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
  const ariac_msgs::msg::Challenge &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::Challenge &);
size_t get_serialized_size(
  const ariac_msgs::msg::Challenge &,
  size_t current_alignment);
size_t
max_serialized_size_Challenge(
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
  const ariac_msgs::msg::Trial & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_limit
  cdr << ros_message.time_limit;
  // Member: trial_name
  cdr << ros_message.trial_name;
  // Member: orders
  {
    size_t size = ros_message.orders.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.orders[i],
        cdr);
    }
  }
  // Member: order_conditions
  {
    size_t size = ros_message.order_conditions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.order_conditions[i],
        cdr);
    }
  }
  // Member: challenges
  {
    size_t size = ros_message.challenges.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.challenges[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::Trial & ros_message)
{
  // Member: time_limit
  cdr >> ros_message.time_limit;

  // Member: trial_name
  cdr >> ros_message.trial_name;

  // Member: orders
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.orders.resize(size);
    for (size_t i = 0; i < size; i++) {
      ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.orders[i]);
    }
  }

  // Member: order_conditions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.order_conditions.resize(size);
    for (size_t i = 0; i < size; i++) {
      ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.order_conditions[i]);
    }
  }

  // Member: challenges
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.challenges.resize(size);
    for (size_t i = 0; i < size; i++) {
      ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.challenges[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::Trial & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time_limit
  {
    size_t item_size = sizeof(ros_message.time_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trial_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.trial_name.size() + 1);
  // Member: orders
  {
    size_t array_size = ros_message.orders.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.orders[index], current_alignment);
    }
  }
  // Member: order_conditions
  {
    size_t array_size = ros_message.order_conditions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.order_conditions[index], current_alignment);
    }
  }
  // Member: challenges
  {
    size_t array_size = ros_message.challenges.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.challenges[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_Trial(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: time_limit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trial_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: orders
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Order(
        full_bounded, current_alignment);
    }
  }

  // Member: order_conditions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OrderCondition(
        full_bounded, current_alignment);
    }
  }

  // Member: challenges
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Challenge(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Trial__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::Trial *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Trial__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::Trial *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Trial__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::Trial *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Trial__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Trial(full_bounded, 0);
}

static message_type_support_callbacks_t _Trial__callbacks = {
  "ariac_msgs::msg",
  "Trial",
  _Trial__cdr_serialize,
  _Trial__cdr_deserialize,
  _Trial__get_serialized_size,
  _Trial__max_serialized_size
};

static rosidl_message_type_support_t _Trial__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Trial__callbacks,
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
get_message_type_support_handle<ariac_msgs::msg::Trial>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_Trial__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, Trial)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_Trial__handle;
}

#ifdef __cplusplus
}
#endif
