/* 
 * libdivecomputer
 * 
 * Copyright (C) 2008 Jef Driesen
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef REEFNET_SENSUS_H
#define REEFNET_SENSUS_H

#include "device.h"
#include "parser.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define REEFNET_SENSUS_MEMORY_SIZE 32768
#define REEFNET_SENSUS_HANDSHAKE_SIZE 10

device_status_t
reefnet_sensus_device_open (device_t **device, const char* name);

device_status_t
reefnet_sensus_device_set_timestamp (device_t *device, unsigned int timestamp);

device_status_t
reefnet_sensus_device_get_handshake (device_t *abstract, unsigned char data[], unsigned int size);

device_status_t
reefnet_sensus_extract_dives (device_t *device, const unsigned char data[], unsigned int size, dive_callback_t callback, void *userdata);

parser_status_t
reefnet_sensus_parser_create (parser_t **parser, unsigned int devtime, dc_ticks_t systime);

parser_status_t
reefnet_sensus_parser_set_calibration (parser_t *parser, double atmospheric, double hydrostatic);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* REEFNET_SENSUS_H */
