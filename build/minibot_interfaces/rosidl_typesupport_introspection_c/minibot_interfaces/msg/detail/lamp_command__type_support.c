// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from minibot_interfaces:msg/LampCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "minibot_interfaces/msg/detail/lamp_command__rosidl_typesupport_introspection_c.h"
#include "minibot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "minibot_interfaces/msg/detail/lamp_command__functions.h"
#include "minibot_interfaces/msg/detail/lamp_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  minibot_interfaces__msg__LampCommand__init(message_memory);
}

void minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_fini_function(void * message_memory)
{
  minibot_interfaces__msg__LampCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_member_array[2] = {
  {
    "l_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(minibot_interfaces__msg__LampCommand, l_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "r_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(minibot_interfaces__msg__LampCommand, r_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_members = {
  "minibot_interfaces__msg",  // message namespace
  "LampCommand",  // message name
  2,  // number of fields
  sizeof(minibot_interfaces__msg__LampCommand),
  minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_member_array,  // message members
  minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_type_support_handle = {
  0,
  &minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_minibot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, minibot_interfaces, msg, LampCommand)() {
  if (!minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_type_support_handle.typesupport_identifier) {
    minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &minibot_interfaces__msg__LampCommand__rosidl_typesupport_introspection_c__LampCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
