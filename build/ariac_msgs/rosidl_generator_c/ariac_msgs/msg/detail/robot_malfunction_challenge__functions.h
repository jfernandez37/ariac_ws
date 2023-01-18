// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__FUNCTIONS_H_
#define ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ariac_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.h"

/// Initialize msg/RobotMalfunctionChallenge message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ariac_msgs__msg__RobotMalfunctionChallenge
 * )) before or use
 * ariac_msgs__msg__RobotMalfunctionChallenge__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__RobotMalfunctionChallenge__init(ariac_msgs__msg__RobotMalfunctionChallenge * msg);

/// Finalize msg/RobotMalfunctionChallenge message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__RobotMalfunctionChallenge__fini(ariac_msgs__msg__RobotMalfunctionChallenge * msg);

/// Create msg/RobotMalfunctionChallenge message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ariac_msgs__msg__RobotMalfunctionChallenge__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
ariac_msgs__msg__RobotMalfunctionChallenge *
ariac_msgs__msg__RobotMalfunctionChallenge__create();

/// Destroy msg/RobotMalfunctionChallenge message.
/**
 * It calls
 * ariac_msgs__msg__RobotMalfunctionChallenge__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__RobotMalfunctionChallenge__destroy(ariac_msgs__msg__RobotMalfunctionChallenge * msg);

/// Check for msg/RobotMalfunctionChallenge message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__RobotMalfunctionChallenge__are_equal(const ariac_msgs__msg__RobotMalfunctionChallenge * lhs, const ariac_msgs__msg__RobotMalfunctionChallenge * rhs);

/// Copy a msg/RobotMalfunctionChallenge message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__RobotMalfunctionChallenge__copy(
  const ariac_msgs__msg__RobotMalfunctionChallenge * input,
  ariac_msgs__msg__RobotMalfunctionChallenge * output);

/// Initialize array of msg/RobotMalfunctionChallenge messages.
/**
 * It allocates the memory for the number of elements and calls
 * ariac_msgs__msg__RobotMalfunctionChallenge__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__init(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array, size_t size);

/// Finalize array of msg/RobotMalfunctionChallenge messages.
/**
 * It calls
 * ariac_msgs__msg__RobotMalfunctionChallenge__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__fini(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array);

/// Create array of msg/RobotMalfunctionChallenge messages.
/**
 * It allocates the memory for the array and calls
 * ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence *
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__create(size_t size);

/// Destroy array of msg/RobotMalfunctionChallenge messages.
/**
 * It calls
 * ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__destroy(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array);

/// Check for msg/RobotMalfunctionChallenge message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__are_equal(const ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * lhs, const ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * rhs);

/// Copy an array of msg/RobotMalfunctionChallenge messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__copy(
  const ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * input,
  ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__FUNCTIONS_H_
