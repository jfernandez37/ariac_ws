// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/KitTrayPose.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/kit_tray_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ariac_msgs__msg__KitTrayPose__init(ariac_msgs__msg__KitTrayPose * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    ariac_msgs__msg__KitTrayPose__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__KitTrayPose__fini(ariac_msgs__msg__KitTrayPose * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
ariac_msgs__msg__KitTrayPose__are_equal(const ariac_msgs__msg__KitTrayPose * lhs, const ariac_msgs__msg__KitTrayPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__KitTrayPose__copy(
  const ariac_msgs__msg__KitTrayPose * input,
  ariac_msgs__msg__KitTrayPose * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__KitTrayPose *
ariac_msgs__msg__KitTrayPose__create()
{
  ariac_msgs__msg__KitTrayPose * msg = (ariac_msgs__msg__KitTrayPose *)malloc(sizeof(ariac_msgs__msg__KitTrayPose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__KitTrayPose));
  bool success = ariac_msgs__msg__KitTrayPose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__KitTrayPose__destroy(ariac_msgs__msg__KitTrayPose * msg)
{
  if (msg) {
    ariac_msgs__msg__KitTrayPose__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__KitTrayPose__Sequence__init(ariac_msgs__msg__KitTrayPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__KitTrayPose * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__KitTrayPose *)calloc(size, sizeof(ariac_msgs__msg__KitTrayPose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__KitTrayPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__KitTrayPose__fini(&data[i - 1]);
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
ariac_msgs__msg__KitTrayPose__Sequence__fini(ariac_msgs__msg__KitTrayPose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__KitTrayPose__fini(&array->data[i]);
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

ariac_msgs__msg__KitTrayPose__Sequence *
ariac_msgs__msg__KitTrayPose__Sequence__create(size_t size)
{
  ariac_msgs__msg__KitTrayPose__Sequence * array = (ariac_msgs__msg__KitTrayPose__Sequence *)malloc(sizeof(ariac_msgs__msg__KitTrayPose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__KitTrayPose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__KitTrayPose__Sequence__destroy(ariac_msgs__msg__KitTrayPose__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__KitTrayPose__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__KitTrayPose__Sequence__are_equal(const ariac_msgs__msg__KitTrayPose__Sequence * lhs, const ariac_msgs__msg__KitTrayPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__KitTrayPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__KitTrayPose__Sequence__copy(
  const ariac_msgs__msg__KitTrayPose__Sequence * input,
  ariac_msgs__msg__KitTrayPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__KitTrayPose);
    ariac_msgs__msg__KitTrayPose * data =
      (ariac_msgs__msg__KitTrayPose *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__KitTrayPose__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__KitTrayPose__fini(&data[i]);
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
    if (!ariac_msgs__msg__KitTrayPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
