# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target trajectory_interfaces::trajectory_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${trajectory_interfaces_TARGETS}.
if(trajectory_interfaces_TARGETS AND NOT TARGET trajectory_interfaces::trajectory_interfaces)
  add_library(trajectory_interfaces::trajectory_interfaces INTERFACE IMPORTED)
  set_target_properties(trajectory_interfaces::trajectory_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${trajectory_interfaces_TARGETS}")
endif()
