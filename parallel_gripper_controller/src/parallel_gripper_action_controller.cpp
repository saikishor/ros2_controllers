// Copyright 2014, SRI International
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// \author Sachin Chitta

// Project
#include <hardware_interface/types/hardware_interface_type_values.hpp>
#include <parallel_gripper_controller/parallel_gripper_action_controller.hpp>

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(
  parallel_gripper_action_controller::GripperActionController,
  controller_interface::ControllerInterface)
