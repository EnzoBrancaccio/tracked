// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosslt_msgs:msg\Int32Tracked.idl
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
#include "rosslt_msgs/msg/detail/int32_tracked__struct.h"
#include "rosslt_msgs/msg/detail/int32_tracked__functions.h"

bool rosslt_msgs__msg__location_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rosslt_msgs__msg__location_header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rosslt_msgs__msg__int32_tracked__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("rosslt_msgs.msg._int32_tracked.Int32Tracked", full_classname_dest, 43) == 0);
  }
  rosslt_msgs__msg__Int32Tracked * ros_message = _ros_message;
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    if (!rosslt_msgs__msg__location_header__convert_from_py(field, &ros_message->location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int32__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosslt_msgs__msg__int32_tracked__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Int32Tracked */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosslt_msgs.msg._int32_tracked");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Int32Tracked");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosslt_msgs__msg__Int32Tracked * ros_message = (rosslt_msgs__msg__Int32Tracked *)raw_ros_message;
  {  // location
    PyObject * field = NULL;
    field = rosslt_msgs__msg__location_header__convert_to_py(&ros_message->location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = std_msgs__msg__int32__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
