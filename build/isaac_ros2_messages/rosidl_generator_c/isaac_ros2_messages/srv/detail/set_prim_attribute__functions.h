// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from isaac_ros2_messages:srv/SetPrimAttribute.idl
// generated code does not contain a copyright notice

#ifndef ISAAC_ROS2_MESSAGES__SRV__DETAIL__SET_PRIM_ATTRIBUTE__FUNCTIONS_H_
#define ISAAC_ROS2_MESSAGES__SRV__DETAIL__SET_PRIM_ATTRIBUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "isaac_ros2_messages/msg/rosidl_generator_c__visibility_control.h"

#include "isaac_ros2_messages/srv/detail/set_prim_attribute__struct.h"

/// Initialize srv/SetPrimAttribute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * isaac_ros2_messages__srv__SetPrimAttribute_Request
 * )) before or use
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Request__init(isaac_ros2_messages__srv__SetPrimAttribute_Request * msg);

/// Finalize srv/SetPrimAttribute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Request__fini(isaac_ros2_messages__srv__SetPrimAttribute_Request * msg);

/// Create srv/SetPrimAttribute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
isaac_ros2_messages__srv__SetPrimAttribute_Request *
isaac_ros2_messages__srv__SetPrimAttribute_Request__create();

/// Destroy srv/SetPrimAttribute message.
/**
 * It calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Request__destroy(isaac_ros2_messages__srv__SetPrimAttribute_Request * msg);

/// Check for srv/SetPrimAttribute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Request__are_equal(const isaac_ros2_messages__srv__SetPrimAttribute_Request * lhs, const isaac_ros2_messages__srv__SetPrimAttribute_Request * rhs);

/// Copy a srv/SetPrimAttribute message.
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
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Request__copy(
  const isaac_ros2_messages__srv__SetPrimAttribute_Request * input,
  isaac_ros2_messages__srv__SetPrimAttribute_Request * output);

/// Initialize array of srv/SetPrimAttribute messages.
/**
 * It allocates the memory for the number of elements and calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__init(isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetPrimAttribute messages.
/**
 * It calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__fini(isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * array);

/// Create array of srv/SetPrimAttribute messages.
/**
 * It allocates the memory for the array and calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence *
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetPrimAttribute messages.
/**
 * It calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__destroy(isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * array);

/// Check for srv/SetPrimAttribute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__are_equal(const isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * lhs, const isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * rhs);

/// Copy an array of srv/SetPrimAttribute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence__copy(
  const isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * input,
  isaac_ros2_messages__srv__SetPrimAttribute_Request__Sequence * output);

/// Initialize srv/SetPrimAttribute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * isaac_ros2_messages__srv__SetPrimAttribute_Response
 * )) before or use
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Response__init(isaac_ros2_messages__srv__SetPrimAttribute_Response * msg);

/// Finalize srv/SetPrimAttribute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Response__fini(isaac_ros2_messages__srv__SetPrimAttribute_Response * msg);

/// Create srv/SetPrimAttribute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
isaac_ros2_messages__srv__SetPrimAttribute_Response *
isaac_ros2_messages__srv__SetPrimAttribute_Response__create();

/// Destroy srv/SetPrimAttribute message.
/**
 * It calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Response__destroy(isaac_ros2_messages__srv__SetPrimAttribute_Response * msg);

/// Check for srv/SetPrimAttribute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Response__are_equal(const isaac_ros2_messages__srv__SetPrimAttribute_Response * lhs, const isaac_ros2_messages__srv__SetPrimAttribute_Response * rhs);

/// Copy a srv/SetPrimAttribute message.
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
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Response__copy(
  const isaac_ros2_messages__srv__SetPrimAttribute_Response * input,
  isaac_ros2_messages__srv__SetPrimAttribute_Response * output);

/// Initialize array of srv/SetPrimAttribute messages.
/**
 * It allocates the memory for the number of elements and calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__init(isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetPrimAttribute messages.
/**
 * It calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__fini(isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * array);

/// Create array of srv/SetPrimAttribute messages.
/**
 * It allocates the memory for the array and calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence *
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetPrimAttribute messages.
/**
 * It calls
 * isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
void
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__destroy(isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * array);

/// Check for srv/SetPrimAttribute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__are_equal(const isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * lhs, const isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * rhs);

/// Copy an array of srv/SetPrimAttribute messages.
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
ROSIDL_GENERATOR_C_PUBLIC_isaac_ros2_messages
bool
isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence__copy(
  const isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * input,
  isaac_ros2_messages__srv__SetPrimAttribute_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ISAAC_ROS2_MESSAGES__SRV__DETAIL__SET_PRIM_ATTRIBUTE__FUNCTIONS_H_
