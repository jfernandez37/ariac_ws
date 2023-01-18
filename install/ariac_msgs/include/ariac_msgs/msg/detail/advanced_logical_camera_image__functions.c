// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/advanced_logical_camera_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `part_poses`
#include "ariac_msgs/msg/detail/part_pose__functions.h"
// Member `tray_poses`
#include "ariac_msgs/msg/detail/kit_tray_pose__functions.h"
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__init(ariac_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (!msg) {
    return false;
  }
  // part_poses
  if (!ariac_msgs__msg__PartPose__Sequence__init(&msg->part_poses, 0)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  // tray_poses
  if (!ariac_msgs__msg__KitTrayPose__Sequence__init(&msg->tray_poses, 0)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__init(&msg->sensor_pose)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__AdvancedLogicalCameraImage__fini(ariac_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (!msg) {
    return;
  }
  // part_poses
  ariac_msgs__msg__PartPose__Sequence__fini(&msg->part_poses);
  // tray_poses
  ariac_msgs__msg__KitTrayPose__Sequence__fini(&msg->tray_poses);
  // sensor_pose
  geometry_msgs__msg__Pose__fini(&msg->sensor_pose);
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__are_equal(const ariac_msgs__msg__AdvancedLogicalCameraImage * lhs, const ariac_msgs__msg__AdvancedLogicalCameraImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // part_poses
  if (!ariac_msgs__msg__PartPose__Sequence__are_equal(
      &(lhs->part_poses), &(rhs->part_poses)))
  {
    return false;
  }
  // tray_poses
  if (!ariac_msgs__msg__KitTrayPose__Sequence__are_equal(
      &(lhs->tray_poses), &(rhs->tray_poses)))
  {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->sensor_pose), &(rhs->sensor_pose)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__copy(
  const ariac_msgs__msg__AdvancedLogicalCameraImage * input,
  ariac_msgs__msg__AdvancedLogicalCameraImage * output)
{
  if (!input || !output) {
    return false;
  }
  // part_poses
  if (!ariac_msgs__msg__PartPose__Sequence__copy(
      &(input->part_poses), &(output->part_poses)))
  {
    return false;
  }
  // tray_poses
  if (!ariac_msgs__msg__KitTrayPose__Sequence__copy(
      &(input->tray_poses), &(output->tray_poses)))
  {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->sensor_pose), &(output->sensor_pose)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__AdvancedLogicalCameraImage *
ariac_msgs__msg__AdvancedLogicalCameraImage__create()
{
  ariac_msgs__msg__AdvancedLogicalCameraImage * msg = (ariac_msgs__msg__AdvancedLogicalCameraImage *)malloc(sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage));
  bool success = ariac_msgs__msg__AdvancedLogicalCameraImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__AdvancedLogicalCameraImage__destroy(ariac_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (msg) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__init(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__AdvancedLogicalCameraImage * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__AdvancedLogicalCameraImage *)calloc(size, sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__AdvancedLogicalCameraImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__AdvancedLogicalCameraImage__fini(&data[i - 1]);
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
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__fini(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__AdvancedLogicalCameraImage__fini(&array->data[i]);
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

ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence *
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__create(size_t size)
{
  ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array = (ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence *)malloc(sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__destroy(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__are_equal(const ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * lhs, const ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__AdvancedLogicalCameraImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__copy(
  const ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * input,
  ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage);
    ariac_msgs__msg__AdvancedLogicalCameraImage * data =
      (ariac_msgs__msg__AdvancedLogicalCameraImage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__AdvancedLogicalCameraImage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__AdvancedLogicalCameraImage__fini(&data[i]);
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
    if (!ariac_msgs__msg__AdvancedLogicalCameraImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
