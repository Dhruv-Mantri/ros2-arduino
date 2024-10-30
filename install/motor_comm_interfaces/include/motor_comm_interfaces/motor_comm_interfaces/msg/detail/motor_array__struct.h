// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__STRUCT_H_
#define MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorArray in the package motor_comm_interfaces.
typedef struct motor_comm_interfaces__msg__MotorArray
{
  /// A 1D array of integers
  rosidl_runtime_c__int32__Sequence data;
  /// Number of rows in the array
  int32_t num_rows;
  /// Number of columns in the array
  int32_t num_cols;
} motor_comm_interfaces__msg__MotorArray;

// Struct for a sequence of motor_comm_interfaces__msg__MotorArray.
typedef struct motor_comm_interfaces__msg__MotorArray__Sequence
{
  motor_comm_interfaces__msg__MotorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_comm_interfaces__msg__MotorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__STRUCT_H_
