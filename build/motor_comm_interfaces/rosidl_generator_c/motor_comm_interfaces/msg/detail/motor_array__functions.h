// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__FUNCTIONS_H_
#define MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motor_comm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "motor_comm_interfaces/msg/detail/motor_array__struct.h"

/// Initialize msg/MotorArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_comm_interfaces__msg__MotorArray
 * )) before or use
 * motor_comm_interfaces__msg__MotorArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
bool
motor_comm_interfaces__msg__MotorArray__init(motor_comm_interfaces__msg__MotorArray * msg);

/// Finalize msg/MotorArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
void
motor_comm_interfaces__msg__MotorArray__fini(motor_comm_interfaces__msg__MotorArray * msg);

/// Create msg/MotorArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_comm_interfaces__msg__MotorArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
motor_comm_interfaces__msg__MotorArray *
motor_comm_interfaces__msg__MotorArray__create();

/// Destroy msg/MotorArray message.
/**
 * It calls
 * motor_comm_interfaces__msg__MotorArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
void
motor_comm_interfaces__msg__MotorArray__destroy(motor_comm_interfaces__msg__MotorArray * msg);

/// Check for msg/MotorArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
bool
motor_comm_interfaces__msg__MotorArray__are_equal(const motor_comm_interfaces__msg__MotorArray * lhs, const motor_comm_interfaces__msg__MotorArray * rhs);

/// Copy a msg/MotorArray message.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
bool
motor_comm_interfaces__msg__MotorArray__copy(
  const motor_comm_interfaces__msg__MotorArray * input,
  motor_comm_interfaces__msg__MotorArray * output);

/// Initialize array of msg/MotorArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_comm_interfaces__msg__MotorArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
bool
motor_comm_interfaces__msg__MotorArray__Sequence__init(motor_comm_interfaces__msg__MotorArray__Sequence * array, size_t size);

/// Finalize array of msg/MotorArray messages.
/**
 * It calls
 * motor_comm_interfaces__msg__MotorArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
void
motor_comm_interfaces__msg__MotorArray__Sequence__fini(motor_comm_interfaces__msg__MotorArray__Sequence * array);

/// Create array of msg/MotorArray messages.
/**
 * It allocates the memory for the array and calls
 * motor_comm_interfaces__msg__MotorArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
motor_comm_interfaces__msg__MotorArray__Sequence *
motor_comm_interfaces__msg__MotorArray__Sequence__create(size_t size);

/// Destroy array of msg/MotorArray messages.
/**
 * It calls
 * motor_comm_interfaces__msg__MotorArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
void
motor_comm_interfaces__msg__MotorArray__Sequence__destroy(motor_comm_interfaces__msg__MotorArray__Sequence * array);

/// Check for msg/MotorArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
bool
motor_comm_interfaces__msg__MotorArray__Sequence__are_equal(const motor_comm_interfaces__msg__MotorArray__Sequence * lhs, const motor_comm_interfaces__msg__MotorArray__Sequence * rhs);

/// Copy an array of msg/MotorArray messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motor_comm_interfaces
bool
motor_comm_interfaces__msg__MotorArray__Sequence__copy(
  const motor_comm_interfaces__msg__MotorArray__Sequence * input,
  motor_comm_interfaces__msg__MotorArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__FUNCTIONS_H_
