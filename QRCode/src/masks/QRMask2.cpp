/*
 * QR Code Generator
 * Copyright (C) 2014 Stefano BARILETTI <hackaroth@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "QRMask2.h"

QRMask2::QRMask2(int module_count, int module_width, Bitmap* bmp_mask) : QRMask(module_count, module_width, bmp_mask)
{
    ID  = "001";
}
//-------------------------------------------------------------------

bool QRMask2::IsMaskCondition(int x, int y)
{
    (void)x;
    bool res    = false;
    res         = y%2 == 0;

    return res;
}
//-------------------------------------------------------------------

