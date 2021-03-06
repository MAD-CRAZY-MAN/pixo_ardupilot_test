#pragma once

#ifndef FORCE_VERSION_H_INCLUDE
#error version.h should never be included directly. You probably want to include AP_Common/AP_FWVersion.h
#endif

#include "ap_version.h"

#define PEACHVERSION "v1.0.0"
#define THISFIRMWARE "PIXONEER PILOT"

// the following line is parsed by the autotest scripts
#define FIRMWARE_VERSION 4,0,5,FIRMWARE_VERSION_TYPE_OFFICIAL

#define FW_MAJOR 4
#define FW_MINOR 0
#define FW_PATCH 5
#define FW_TYPE FIRMWARE_VERSION_TYPE_OFFICIAL
