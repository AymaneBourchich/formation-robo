#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to trajectory_interfaces__msg__TrajectoryCommand
/// Commande de haut niveau envoyee par le node "commande" (C++, brain_commander)
/// au node "tortue" (Python, turtle_executor), qui se charge de la traduire
/// en commande de vitesse (Twist) pour turtlesim.
///
/// Ne PAS modifier ce fichier : il est commun aux deux nodes.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectoryCommand::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryCommand {
  type RmwMsg = super::msg::rmw::TrajectoryCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        linear_speed: msg.linear_speed,
        angular_speed: msg.angular_speed,
        avoid_obstacle: msg.avoid_obstacle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      linear_speed: msg.linear_speed,
      angular_speed: msg.angular_speed,
      avoid_obstacle: msg.avoid_obstacle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      linear_speed: msg.linear_speed,
      angular_speed: msg.angular_speed,
      avoid_obstacle: msg.avoid_obstacle,
    }
  }
}


