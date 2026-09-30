// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__STRUCT_H_
#define TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectoryCommand in the package trajectory_interfaces.
/**
  * Commande de haut niveau envoyee par le node "commande" (C++, brain_commander)
  * au node "tortue" (Python, turtle_executor), qui se charge de la traduire
  * en commande de vitesse (Twist) pour turtlesim.
  *
  * Ne PAS modifier ce fichier : il est commun aux deux nodes.
 */
typedef struct trajectory_interfaces__msg__TrajectoryCommand
{
  /// vitesse d'avancement souhaitee (m/s)
  float linear_speed;
  /// vitesse de rotation souhaitee (rad/s)
  float angular_speed;
  /// true si le node "commande" a detecte un obstacle a eviter
  bool avoid_obstacle;
} trajectory_interfaces__msg__TrajectoryCommand;

// Struct for a sequence of trajectory_interfaces__msg__TrajectoryCommand.
typedef struct trajectory_interfaces__msg__TrajectoryCommand__Sequence
{
  trajectory_interfaces__msg__TrajectoryCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trajectory_interfaces__msg__TrajectoryCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__STRUCT_H_
