// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from minibot_interfaces:msg/LampCommand.idl
// generated code does not contain a copyright notice

#ifndef MINIBOT_INTERFACES__MSG__DETAIL__LAMP_COMMAND__FUNCTIONS_H_
#define MINIBOT_INTERFACES__MSG__DETAIL__LAMP_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "minibot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "minibot_interfaces/msg/detail/lamp_command__struct.h"

/// Initialize msg/LampCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * minibot_interfaces__msg__LampCommand
 * )) before or use
 * minibot_interfaces__msg__LampCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
bool
minibot_interfaces__msg__LampCommand__init(minibot_interfaces__msg__LampCommand * msg);

/// Finalize msg/LampCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
void
minibot_interfaces__msg__LampCommand__fini(minibot_interfaces__msg__LampCommand * msg);

/// Create msg/LampCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * minibot_interfaces__msg__LampCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
minibot_interfaces__msg__LampCommand *
minibot_interfaces__msg__LampCommand__create();

/// Destroy msg/LampCommand message.
/**
 * It calls
 * minibot_interfaces__msg__LampCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
void
minibot_interfaces__msg__LampCommand__destroy(minibot_interfaces__msg__LampCommand * msg);

/// Check for msg/LampCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
bool
minibot_interfaces__msg__LampCommand__are_equal(const minibot_interfaces__msg__LampCommand * lhs, const minibot_interfaces__msg__LampCommand * rhs);

/// Copy a msg/LampCommand message.
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
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
bool
minibot_interfaces__msg__LampCommand__copy(
  const minibot_interfaces__msg__LampCommand * input,
  minibot_interfaces__msg__LampCommand * output);

/// Initialize array of msg/LampCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * minibot_interfaces__msg__LampCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
bool
minibot_interfaces__msg__LampCommand__Sequence__init(minibot_interfaces__msg__LampCommand__Sequence * array, size_t size);

/// Finalize array of msg/LampCommand messages.
/**
 * It calls
 * minibot_interfaces__msg__LampCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
void
minibot_interfaces__msg__LampCommand__Sequence__fini(minibot_interfaces__msg__LampCommand__Sequence * array);

/// Create array of msg/LampCommand messages.
/**
 * It allocates the memory for the array and calls
 * minibot_interfaces__msg__LampCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
minibot_interfaces__msg__LampCommand__Sequence *
minibot_interfaces__msg__LampCommand__Sequence__create(size_t size);

/// Destroy array of msg/LampCommand messages.
/**
 * It calls
 * minibot_interfaces__msg__LampCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
void
minibot_interfaces__msg__LampCommand__Sequence__destroy(minibot_interfaces__msg__LampCommand__Sequence * array);

/// Check for msg/LampCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
bool
minibot_interfaces__msg__LampCommand__Sequence__are_equal(const minibot_interfaces__msg__LampCommand__Sequence * lhs, const minibot_interfaces__msg__LampCommand__Sequence * rhs);

/// Copy an array of msg/LampCommand messages.
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
ROSIDL_GENERATOR_C_PUBLIC_minibot_interfaces
bool
minibot_interfaces__msg__LampCommand__Sequence__copy(
  const minibot_interfaces__msg__LampCommand__Sequence * input,
  minibot_interfaces__msg__LampCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MINIBOT_INTERFACES__MSG__DETAIL__LAMP_COMMAND__FUNCTIONS_H_
