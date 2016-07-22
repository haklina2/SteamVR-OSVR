/** @file
    @brief Server driver host

    @date 2016

    @author
    Sensics, Inc.
    <http://sensics.com>

*/

// Copyright 2016 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// 	http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Internal Includes
#include "ServerDriverHost.h"

// Library/third-party includes
// - none

// Standard includes
#include <iostream>

ServerDriverHost::ServerDriverHost()
{
    std::cout << "ServerDriverHost::ServerDriverHost() called." << std::endl;
    // do nothing
}

ServerDriverHost::~ServerDriverHost()
{
    std::cout << "ServerDriverHost::~ServerDriverHost() called." << std::endl;
    // do nothing
}

bool ServerDriverHost::TrackedDeviceAdded(const char* device_serial_number)
{
    std::cout << "ServerDriverHost::TrackedDeviceAdded() called." << std::endl;
    // TODO
    return false;
}

void ServerDriverHost::TrackedDevicePoseUpdated(uint32_t which_device, const vr::DriverPose_t& new_pose)
{
    std::cout << "ServerDriverHost::TrackedDevicePoseUpdated() called." << std::endl;
    // TODO
}

void ServerDriverHost::TrackedDevicePropertiesChanged(uint32_t which_device)
{
    std::cout << "ServerDriverHost::TrackedDevicePropertiesChanged() called." << std::endl;
    // TODO
}

void ServerDriverHost::VsyncEvent(double vsync_time_offset_seconds)
{
    std::cout << "ServerDriverHost::VSyncEvent() called." << std::endl;
    // TODO
}

void ServerDriverHost::TrackedDeviceButtonPressed(uint32_t which_device, vr::EVRButtonId button_id, double event_time_offset)
{
    std::cout << "ServerDriverHost::TrackedDeviceButtonPressed() called." << std::endl;
    // TODO
}

void ServerDriverHost::TrackedDeviceButtonUnpressed(uint32_t which_device, vr::EVRButtonId button_id, double event_time_offset)
{
    std::cout << "ServerDriverHost::TrackedDeviceButtonUnpressed() called." << std::endl;
    // TODO
}

void ServerDriverHost::TrackedDeviceButtonTouched(uint32_t which_device, vr::EVRButtonId button_id, double event_time_offset)
{
    std::cout << "ServerDriverHost::TrackedDeviceButtonTouched() called." << std::endl;
    // TODO
}

void ServerDriverHost::TrackedDeviceButtonUntouched(uint32_t which_device, vr::EVRButtonId button_id, double event_time_offset)
{
    std::cout << "ServerDriverHost::TrackedDeviceButtonUntouched() called." << std::endl;
    // TODO
}

void ServerDriverHost::TrackedDeviceAxisUpdated(uint32_t which_device, uint32_t which_axis, const vr::VRControllerAxis_t& axis_state)
{
    std::cout << "ServerDriverHost::TrackedDeviceAxisUpdated() called." << std::endl;
    // TODO
}

void ServerDriverHost::MCImageUpdated()
{
    std::cout << "ServerDriverHost::MCImageUpdated() called." << std::endl;
    // TODO
}

vr::IVRSettings* ServerDriverHost::GetSettings(const char* interface_version)
{
    std::cout << "ServerDriverHost::GetSettings() called." << std::endl;
    return &vrSettings_;
}

void ServerDriverHost::PhysicalIpdSet(uint32_t which_device, float physical_ipd_meters)
{
    std::cout << "ServerDriverHost::PhysicalIpdSet() called." << std::endl;
    // TODO
}

void ServerDriverHost::ProximitySensorState(uint32_t which_device, bool proximity_sensor_triggered)
{
    std::cout << "ServerDriverHost::ProximitySensorState() called." << std::endl;
    // TODO
}

void ServerDriverHost::VendorSpecificEvent(uint32_t which_device, vr::EVREventType event_type, const vr::VREvent_Data_t& event_data, double event_time_offset)
{
    std::cout << "ServerDriverHost::VendorSpecificEvent() called." << std::endl;
    // TODO
}

bool ServerDriverHost::IsExiting()
{
    std::cout << "ServerDriverHost::IsExiting() called." << std::endl;
    return false; // TODO
}

