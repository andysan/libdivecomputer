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

#ifndef ARRAY_H
#define ARRAY_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void
array_reverse_bytes (unsigned char data[], unsigned int size);

void
array_reverse_bits (unsigned char data[], unsigned int size);

int
array_isequal (const unsigned char data[], unsigned int size, unsigned char value);

unsigned int
array_uint32_be (const unsigned char data[]);

unsigned int
array_uint32_le (const unsigned char data[]);

unsigned int
array_uint24_be (const unsigned char data[]);

unsigned int
array_uint24_le (const unsigned char data[]);

unsigned short
array_uint16_be (const unsigned char data[]);

unsigned short
array_uint16_le (const unsigned char data[]);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* ARRAY_H */
