// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/AssemblyPart.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/assembly_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `part`
#include "ariac_msgs/msg/detail/part__functions.h"
// Member `assembled_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `install_direction`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
ariac_msgs__msg__AssemblyPart__init(ariac_msgs__msg__AssemblyPart * msg)
{
  if (!msg) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__init(&msg->part)) {
    ariac_msgs__msg__AssemblyPart__fini(msg);
    return false;
  }
  // assembled_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->assembled_pose)) {
    ariac_msgs__msg__AssemblyPart__fini(msg);
    return false;
  }
  // install_direction
  if (!geometry_msgs__msg__Vector3__init(&msg->install_direction)) {
    ariac_msgs__msg__AssemblyPart__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__AssemblyPart__fini(ariac_msgs__msg__AssemblyPart * msg)
{
  if (!msg) {
    return;
  }
  // part
  ariac_msgs__msg__Part__fini(&msg->part);
  // assembled_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->assembled_pose);
  // install_direction
  geometry_msgs__msg__Vector3__fini(&msg->install_direction);
}

bool
ariac_msgs__msg__AssemblyPart__are_equal(const ariac_msgs__msg__AssemblyPart * lhs, const ariac_msgs__msg__AssemblyPart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__are_equal(
      &(lhs->part), &(rhs->part)))
  {
    return false;
  }
  // assembled_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->assembled_pose), &(rhs->assembled_pose)))
  {
    return false;
  }
  // install_direction
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->install_direction), &(rhs->install_direction)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__AssemblyPart__copy(
  const ariac_msgs__msg__AssemblyPart * input,
  ariac_msgs__msg__AssemblyPart * output)
{
  if (!input || !output) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__copy(
      &(input->part), &(output->part)))
  {
    return false;
  }
  // assembled_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->assembled_pose), &(output->assembled_pose)))
  {
    return false;
  }
  // install_direction
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->install_direction), &(output->install_direction)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__AssemblyPart *
ariac_msgs__msg__AssemblyPart__create()
{
  ariac_msgs__msg__AssemblyPart * msg = (ariac_msgs__msg__AssemblyPart *)malloc(sizeof(ariac_msgs__msg__AssemblyPart));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__AssemblyPart));
  bool success = ariac_msgs__msg__AssemblyPart__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__AssemblyPart__destroy(ariac_msgs__msg__AssemblyPart * msg)
{
  if (msg) {
    ariac_msgs__msg__AssemblyPart__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__AssemblyPart__Sequence__init(ariac_msgs__msg__AssemblyPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__AssemblyPart * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__AssemblyPart *)calloc(size, sizeof(ariac_msgs__msg__AssemblyPart));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__AssemblyPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__AssemblyPart__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ariac_msgs__msg__AssemblyPart__Sequence__fini(ariac_msgs__msg__AssemblyPart__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__AssemblyPart__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ariac_msgs__msg__AssemblyPart__Sequence *
ariac_msgs__msg__AssemblyPart__Sequence__create(size_t size)
{
  ariac_msgs__msg__AssemblyPart__Sequence * array = (ariac_msgs__msg__AssemblyPart__Sequence *)malloc(sizeof(ariac_msgs__msg__AssemblyPart__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__AssemblyPart__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__AssemblyPart__Sequence__destroy(ariac_msgs__msg__AssemblyPart__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__AssemblyPart__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__AssemblyPart__Sequence__are_equal(const ariac_msgs__msg__AssemblyPart__Sequence * lhs, const ariac_msgs__msg__AssemblyPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__AssemblyPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__AssemblyPart__Sequence__copy(
  const ariac_msgs__msg__AssemblyPart__Sequence * input,
  ariac_msgs__msg__AssemblyPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__AssemblyPart);
    ariac_msgs__msg__AssemblyPart * data =
      (ariac_msgs__msg__AssemblyPart *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__AssemblyPart__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__AssemblyPart__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__AssemblyPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
