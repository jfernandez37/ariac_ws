// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ariac_msgs/msg/detail/part_place_condition__struct.h"
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"

bool ariac_msgs__msg__part__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__part__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__part_place_condition__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ariac_msgs.msg._part_place_condition.PartPlaceCondition", full_classname_dest, 55) == 0);
  }
  ariac_msgs__msg__PartPlaceCondition * ros_message = _ros_message;
  {  // part
    PyObject * field = PyObject_GetAttrString(_pymsg, "part");
    if (!field) {
      return false;
    }
    if (!ariac_msgs__msg__part__convert_from_py(field, &ros_message->part)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // agv
    PyObject * field = PyObject_GetAttrString(_pymsg, "agv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->agv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__part_place_condition__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PartPlaceCondition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._part_place_condition");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PartPlaceCondition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__PartPlaceCondition * ros_message = (ariac_msgs__msg__PartPlaceCondition *)raw_ros_message;
  {  // part
    PyObject * field = NULL;
    field = ariac_msgs__msg__part__convert_to_py(&ros_message->part);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "part", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->agv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
