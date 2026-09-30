#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "trajectory_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trajectory_interfaces__msg__TrajectoryCommand() -> *const std::ffi::c_void;
}

#[link(name = "trajectory_interfaces__rosidl_generator_c")]
extern "C" {
    fn trajectory_interfaces__msg__TrajectoryCommand__init(msg: *mut TrajectoryCommand) -> bool;
    fn trajectory_interfaces__msg__TrajectoryCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryCommand>, size: usize) -> bool;
    fn trajectory_interfaces__msg__TrajectoryCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryCommand>);
    fn trajectory_interfaces__msg__TrajectoryCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryCommand>) -> bool;
}

// Corresponds to trajectory_interfaces__msg__TrajectoryCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Commande de haut niveau envoyee par le node "commande" (C++, brain_commander)
/// au node "tortue" (Python, turtle_executor), qui se charge de la traduire
/// en commande de vitesse (Twist) pour turtlesim.
///
/// Ne PAS modifier ce fichier : il est commun aux deux nodes.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryCommand {
    /// vitesse d'avancement souhaitee (m/s)
    pub linear_speed: f32,

    /// vitesse de rotation souhaitee (rad/s)
    pub angular_speed: f32,

    /// true si le node "commande" a detecte un obstacle a eviter
    pub avoid_obstacle: bool,

}



impl Default for TrajectoryCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trajectory_interfaces__msg__TrajectoryCommand__init(&mut msg as *mut _) {
        panic!("Call to trajectory_interfaces__msg__TrajectoryCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trajectory_interfaces__msg__TrajectoryCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trajectory_interfaces__msg__TrajectoryCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trajectory_interfaces__msg__TrajectoryCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryCommand where Self: Sized {
  const TYPE_NAME: &'static str = "trajectory_interfaces/msg/TrajectoryCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trajectory_interfaces__msg__TrajectoryCommand() }
  }
}


