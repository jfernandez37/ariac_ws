// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/sensors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ariac_msgs__msg__Sensors__init(ariac_msgs__msg__Sensors * msg)
{
  if (!msg) {
    return false;
  }
  // break_beam
  // proximity
  // laser_profiler
  // lidar
  // camera
  // logical_camera
  return true;
}

void
ariac_msgs__msg__Sensors__fini(ariac_msgs__msg__Sensors * msg)
{
  if (!msg) {
    return;
  }
  // break_beam
  // proximity
  // laser_profiler
  // lidar
  // camera
  // logical_camera
}

bool
ariac_msgs__msg__Sensors__are_equal(const ariac_msgs__msg__Sensors * lhs, const ariac_msgs__msg__Sensors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // break_beam
  if (lhs->break_beam != rhs->break_beam) {
    return false;
  }
  // proximity
  if (lhs->proximity != rhs->proximity) {
    return false;
  }
  // laser_profiler
  if (lhs->laser_profiler != rhs->laser_profiler) {
    return false;
  }
  // lidar
  if (lhs->lidar != rhs->lidar) {
    return false;
  }
  // camera
  if (lhs->camera != rhs->camera) {
    return false;
  }
  // logical_camera
  if (lhs->logical_camera != rhs->logical_camera) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Sensors__copy(
  const ariac_msgs__msg__Sensors * input,
  ariac_msgs__msg__Sensors * output)
{
  if (!input || !output) {
    return false;
  }
  // break_beam
  output->break_beam = input->break_beam;
  // proximity
  output->proximity = input->proximity;
  // laser_profiler
  output->laser_profiler = input->laser_profiler;
  // lidar
  output->lidar = input->lidar;
  // camera
  output->camera = input->camera;
  // logical_camera
  output->logical_camera = input->logical_camera;
  return true;
}

ariac_msgs__msg__Sensors *
ariac_msgs__msg__Sensors__create()
{
  ariac_msgs__msg__Sensors * msg = (ariac_msgs__msg__Sensors *)malloc(sizeof(ariac_msgs__msg__Sensors));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Sensors));
  bool success = ariac_msgs__msg__Sensors__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Sensors__destroy(ariac_msgs__msg__Sensors * msg)
{
  if (msg) {
    ariac_msgs__msg__Sensors__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__Sensors__Sequence__init(ariac_msgs__msg__Sensors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__Sensors * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__Sensors *)calloc(size, sizeof(ariac_msgs__msg__Sensors));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Sensors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Sensors__fini(&data[i - 1]);
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
ariac_msgs__msg__Sensors__Sequence__fini(ariac_msgs__msg__Sensors__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__Sensors__fini(&array->data[i]);
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

ariac_msgs__msg__Sensors__Sequence *
ariac_msgs__msg__Sensors__Sequence__create(size_t size)
{
  ariac_msgs__msg__Sensors__Sequence * array = (ariac_msgs__msg__Sensors__Sequence *)malloc(sizeof(ariac_msgs__msg__Sensors__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Sensors__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Sensors__Sequence__destroy(ariac_msgs__msg__Sensors__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__Sensors__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__Sensors__Sequence__are_equal(const ariac_msgs__msg__Sensors__Sequence * lhs, const ariac_msgs__msg__Sensors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Sensors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Sensors__Sequence__copy(
  const ariac_msgs__msg__Sensors__Sequence * input,
  ariac_msgs__msg__Sensors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Sensors);
    ariac_msgs__msg__Sensors * data =
      (ariac_msgs__msg__Sensors *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Sensors__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Sensors__fini(&data[i]);
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
    if (!ariac_msgs__msg__Sensors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
