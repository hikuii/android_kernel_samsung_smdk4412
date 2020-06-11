/*
 * include/linux/mfc_decode_status.h
 *
 * Author: leewp14 <lee.wp14@gmail.com>
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _MFC_DECODE_STATUS_H
#define _MFC_DECODE_STATUS_H

/*
 * mfc_isdecode() is defined in mfc_dec.c and mfc_dec, mfc_dev are responsible
 * in controlling the MFC decoding status.
 *
 * To get decoding status, execute mfc_isdecode(NULL).
 *  - return 3: FHD Decoding
 *  - return 2: HD Decoding
 *  - return 1: SD Decoding
 *  - return 0: Not decoding
 */
unsigned int mfc_isdecode(int);
#endif