/****************************************************************************
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 VeriSilicon Holdings Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 *****************************************************************************
 *
 * The GPL License (GPL)
 *
 * Copyright (c) 2020 VeriSilicon Holdings Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program;
 *
 *****************************************************************************
 *
 * Note: This software is released under dual MIT and GPL licenses. A
 * recipient may use this file under the terms of either the MIT license or
 * GPL License. If you wish to use only one license not the other, you can
 * indicate your decision by deleting one of the above license notices in your
 * version of this file.
 *
 *****************************************************************************/

#ifndef _VVCAM_OV2775_REGS_1080PHDR_2DOL_H_
#define _VVCAM_OV2775_REGS_1080PHDR_2DOL_H_

#include "vvsensor.h"

/* 1080P hdr 2dol RAW12 */
static struct vvcam_sccb_data_s ov2775_init_setting_1080p_hdr_2dol[] = {
    {0x3000, 0x02},
    {0x3001, 0x28},
    {0x3002, 0x03},
    {0x3003, 0x01},
    {0x3004, 0x02},
    {0x3005, 0x29},
    {0x3006, 0x00},
    {0x3007, 0x07},
    {0x3008, 0x01},
    {0x3009, 0x00},
    {0x300c, 0x6c},
    {0x300e, 0x80},
    {0x300f, 0x00},
    {0x3012, 0x00},
    {0x3013, 0x00},
    {0x3014, 0xc4},
    {0x3015, 0x00},
    {0x3017, 0x00},
    {0x3018, 0x00},
    {0x3019, 0x00},
    {0x301a, 0x00},
    {0x301b, 0x0e},
    {0x301e, 0x17},
    {0x301f, 0xe1},
    {0x3030, 0x02},
    {0x3031, 0x62},
    {0x3032, 0xf0},
    {0x3033, 0x30},
    {0x3034, 0x3f},
    {0x3035, 0x5f},
    {0x3036, 0x02},
    {0x3037, 0x9f},
    {0x3038, 0x04},
    {0x3039, 0xb7},
    {0x303a, 0x04},
    {0x303b, 0x07},
    {0x303c, 0xf0},
    {0x303d, 0x00},
    {0x303e, 0x0b},
    {0x303f, 0xe3},
    {0x3040, 0xf3},
    {0x3041, 0x29},
    {0x3042, 0xf6},
    {0x3043, 0x65},
    {0x3044, 0x06},
    {0x3045, 0x0f},
    {0x3046, 0x59},
    {0x3047, 0x07},
    {0x3048, 0x82},
    {0x3049, 0xcf},
    {0x304a, 0x12},
    {0x304b, 0x40},
    {0x304c, 0x33},
    {0x304d, 0xa4},
    {0x304e, 0x0b},
    {0x304f, 0x3d},
    {0x3050, 0x10},
    {0x3060, 0x00},
    {0x3061, 0x64},
    {0x3062, 0x00},
    {0x3063, 0xe4},
    {0x3066, 0x80},
    {0x3080, 0x00},
    {0x3081, 0x00},
    {0x3082, 0x01},
    {0x3083, 0xe3},
    {0x3084, 0x06},
    {0x3085, 0x00},
    {0x3086, 0x10},
    {0x3087, 0x10},
    {0x3089, 0x00},
    {0x308a, 0x01},
    {0x3093, 0x00},
    {0x30a0, 0x00},
    {0x30a1, 0x00},
    {0x30a2, 0x00},
    {0x30a3, 0x00},
    {0x30a4, 0x07},
    {0x30a5, 0x8f},
    {0x30a6, 0x04},
    {0x30a7, 0x47},
    {0x30a8, 0x00},
    {0x30a9, 0x00},
    {0x30aa, 0x00},
    {0x30ab, 0x00},
    {0x30ac, 0x07},
    {0x30ad, 0x90},
    {0x30ae, 0x04},
    {0x30af, 0x48},
    {0x30b0, 0x08},
    {0x30b1, 0xae},
    {0x30b2, 0x04},
    {0x30b3, 0x65},
    {0x30b4, 0x00},
    {0x30b5, 0x00},
    {0x30b6, 0x00},
    {0x30b7, 0x10},
    {0x30b8, 0x00},
    {0x30b9, 0x02},
    {0x30ba, 0x10},
    {0x30bb, 0x00},
    {0x30bc, 0x00},
    {0x30bd, 0x03},
    {0x30be, 0x5c},
    {0x30bf, 0x00},
    {0x30c0, 0x05},
    {0x30c1, 0x00},
    {0x30c2, 0x20},
    {0x30c3, 0x00},
    {0x30c4, 0x4a},
    {0x30c5, 0x00},
    {0x30c7, 0x00},
    {0x30c8, 0x00},
    {0x30d1, 0x00},
    {0x30d2, 0x00},
    {0x30d3, 0x80},
    {0x30d4, 0x00},
    {0x30d9, 0x09},
    {0x30da, 0x64},
    {0x30dd, 0x00},
    {0x30de, 0x16},
    {0x30df, 0x00},
    {0x30e0, 0x17},
    {0x30e1, 0x00},
    {0x30e2, 0x18},
    {0x30e3, 0x10},
    {0x30e4, 0x04},
    {0x30e5, 0x00},
    {0x30e6, 0x00},
    {0x30e7, 0x00},
    {0x30e8, 0x00},
    {0x30e9, 0x00},
    {0x30ea, 0x00},
    {0x30eb, 0x00},
    {0x30ec, 0x00},
    {0x30ed, 0x00},
    {0x3101, 0x00},
    {0x3102, 0x00},
    {0x3103, 0x00},
    {0x3104, 0x00},
    {0x3105, 0x8c},
    {0x3106, 0x87},
    {0x3107, 0xc0},
    {0x3108, 0x9d},
    {0x3109, 0x8d},
    {0x310a, 0x8d},
    {0x310b, 0x6a},
    {0x310c, 0x3a},
    {0x310d, 0x5a},
    {0x310e, 0x00},
    {0x3120, 0x00},
    {0x3121, 0x00},
    {0x3122, 0x00},
    {0x3123, 0x00},
    {0x3124, 0x00},
    {0x3125, 0x70},
    {0x3126, 0x1f},
    {0x3127, 0x0f},
    {0x3128, 0x00},
    {0x3129, 0x3a},
    {0x312a, 0x02},
    {0x312b, 0x0f},
    {0x312c, 0x00},
    {0x312d, 0x0f},
    {0x312e, 0x1d},
    {0x312f, 0x00},
    {0x3130, 0x00},
    {0x3131, 0x00},
    {0x3132, 0x00},
    {0x3140, 0x0a},
    {0x3141, 0x03},
    {0x3142, 0x00},
    {0x3143, 0x00},
    {0x3144, 0x00},
    {0x3145, 0x00},
    {0x3146, 0x00},
    {0x3147, 0x00},
    {0x3148, 0x00},
    {0x3149, 0x00},
    {0x314a, 0x00},
    {0x314b, 0x00},
    {0x314c, 0x00},
    {0x314d, 0x00},
    {0x314e, 0x1c},
    {0x314f, 0xff},
    {0x3150, 0xff},
    {0x3151, 0xff},
    {0x3152, 0x10},
    {0x3153, 0x10},
    {0x3154, 0x10},
    {0x3155, 0x00},
    {0x3156, 0x03},
    {0x3157, 0x00},
    {0x3158, 0x0f},
    {0x3159, 0xff},
    {0x315a, 0x01},
    {0x315b, 0x00},
    {0x315c, 0x01},
    {0x315d, 0x00},
    {0x315e, 0x01},
    {0x315f, 0x00},
    {0x3160, 0x00},
    {0x3161, 0x40},
    {0x3162, 0x00},
    {0x3163, 0x40},
    {0x3164, 0x00},
    {0x3165, 0x40},
    {0x3190, 0x01},
    {0x3191, 0x99},
    {0x3193, 0x08},
    {0x3194, 0x13},
    {0x3195, 0x33},
    {0x3196, 0x00},
    {0x3197, 0x10},
    {0x3198, 0x00},
    {0x3199, 0x3f},
    {0x319a, 0x40},
    {0x319b, 0x7f},
    {0x319c, 0x80},
    {0x319d, 0xbf},
    {0x319e, 0xc0},
    {0x319f, 0xff},
    {0x31a0, 0x24},
    {0x31a1, 0x55},
    {0x31a2, 0x00},
    {0x31a3, 0x00},
    {0x31a6, 0x00},
    {0x31a7, 0x00},
    {0x31b0, 0x00},
    {0x31b1, 0x00},
    {0x31b2, 0x02},
    {0x31b3, 0x00},
    {0x31b4, 0x00},
    {0x31b5, 0x01},
    {0x31b6, 0x00},
    {0x31b7, 0x00},
    {0x31b8, 0x00},
    {0x31b9, 0x00},
    {0x31ba, 0x00},
    {0x31d0, 0x3c},
    {0x31d1, 0x34},
    {0x31d2, 0x3c},
    {0x31d3, 0x00},
    {0x31d4, 0x2d},
    {0x31d5, 0x00},
    {0x31d6, 0x01},
    {0x31d7, 0x06},
    {0x31d8, 0x00},
    {0x31d9, 0x64},
    {0x31da, 0x00},
    {0x31db, 0x30},
    {0x31dc, 0x04},
    {0x31dd, 0x69},
    {0x31de, 0x0a},
    {0x31df, 0x3c},
    {0x31e0, 0x04},
    {0x31e1, 0x32},
    {0x31e2, 0x00},
    {0x31e3, 0x00},
    {0x31e4, 0x08},
    {0x31e5, 0x80},
    {0x31e6, 0x00},
    {0x31e7, 0x2c},
    {0x31e8, 0x6c},
    {0x31e9, 0xac},
    {0x31ea, 0xec},
    {0x31eb, 0x3f},
    {0x31ec, 0x0f},
    {0x31ed, 0x20},
    {0x31ee, 0x04},
    {0x31ef, 0x48},
    {0x31f0, 0x07},
    {0x31f1, 0x90},
    {0x31f2, 0x04},
    {0x31f3, 0x48},
    {0x31f4, 0x07},
    {0x31f5, 0x90},
    {0x31f6, 0x04},
    {0x31f7, 0x48},
    {0x31f8, 0x07},
    {0x31f9, 0x90},
    {0x31fa, 0x04},
    {0x31fb, 0x48},
    {0x31fd, 0xcb},
    {0x31fe, 0x0f},
    {0x31ff, 0x03},
    {0x3200, 0x00},
    {0x3201, 0xff},
    {0x3202, 0x00},
    {0x3203, 0xff},
    {0x3204, 0xff},
    {0x3205, 0xff},
    {0x3206, 0xff},
    {0x3207, 0xff},
    {0x3208, 0xff},
    {0x3209, 0xff},
    {0x320a, 0xff},
    {0x320b, 0x1b},
    {0x320c, 0x1f},
    {0x320d, 0x1e},
    {0x320e, 0x30},
    {0x320f, 0x2d},
    {0x3210, 0x2c},
    {0x3211, 0x2b},
    {0x3212, 0x2a},
    {0x3213, 0x24},
    {0x3214, 0x22},
    {0x3215, 0x00},
    {0x3216, 0x04},
    {0x3217, 0x2c},
    {0x3218, 0x6c},
    {0x3219, 0xac},
    {0x321a, 0xec},
    {0x321b, 0x00},
    {0x3230, 0x3a},
    {0x3231, 0x00},
    {0x3232, 0x80},
    {0x3233, 0x00},
    {0x3234, 0x10},
    {0x3235, 0xaa},
    {0x3236, 0x55},
    {0x3237, 0x99},
    {0x3238, 0x66},
    {0x3239, 0x08},
    {0x323a, 0x88},
    {0x323b, 0x00},
    {0x323c, 0x00},
    {0x323d, 0x03},
    {0x3250, 0x33},
    {0x3251, 0x00},
    {0x3252, 0x20},
    {0x3253, 0x00},
    {0x3254, 0x11},
    {0x3255, 0x01},
    {0x3256, 0x00},
    {0x3257, 0x00},
    {0x3258, 0x00},
    {0x3270, 0x01},
    {0x3271, 0x60},
    {0x3272, 0xc0},
    {0x3273, 0x00},
    {0x3274, 0x80},
    {0x3275, 0x40},
    {0x3276, 0x02},
    {0x3277, 0x08},
    {0x3278, 0x10},
    {0x3279, 0x04},
    {0x327a, 0x00},
    {0x327b, 0x03},
    {0x327c, 0x10},
    {0x327d, 0x60},
    {0x327e, 0xc0},
    {0x327f, 0x06},
    {0x3288, 0x10},
    {0x3289, 0x00},
    {0x328a, 0x08},
    {0x328b, 0x00},
    {0x328c, 0x04},
    {0x328d, 0x00},
    {0x328e, 0x02},
    {0x328f, 0x00},
    {0x3290, 0x20},
    {0x3291, 0x00},
    {0x3292, 0x10},
    {0x3293, 0x00},
    {0x3294, 0x08},
    {0x3295, 0x00},
    {0x3296, 0x04},
    {0x3297, 0x00},
    {0x3298, 0x40},
    {0x3299, 0x00},
    {0x329a, 0x20},
    {0x329b, 0x00},
    {0x329c, 0x10},
    {0x329d, 0x00},
    {0x329e, 0x08},
    {0x329f, 0x00},
    {0x32a0, 0x7f},
    {0x32a1, 0xff},
    {0x32a2, 0x40},
    {0x32a3, 0x00},
    {0x32a4, 0x20},
    {0x32a5, 0x00},
    {0x32a6, 0x10},
    {0x32a7, 0x00},
    {0x32a8, 0x00},
    {0x32a9, 0x00},
    {0x32aa, 0x00},
    {0x32ab, 0x00},
    {0x32ac, 0x00},
    {0x32ad, 0x00},
    {0x32ae, 0x00},
    {0x32af, 0x00},
    {0x32b0, 0x00},
    {0x32b1, 0x00},
    {0x32b2, 0x00},
    {0x32b3, 0x00},
    {0x32b4, 0x00},
    {0x32b5, 0x00},
    {0x32b6, 0x00},
    {0x32b7, 0x00},
    {0x32b8, 0x00},
    {0x32b9, 0x00},
    {0x32ba, 0x00},
    {0x32bb, 0x00},
    {0x32bc, 0x00},
    {0x32bd, 0x00},
    {0x32be, 0x00},
    {0x32bf, 0x00},
    {0x32c0, 0x00},
    {0x32c1, 0x00},
    {0x32c2, 0x00},
    {0x32c3, 0x00},
    {0x32c4, 0x00},
    {0x32c5, 0x00},
    {0x32c6, 0x00},
    {0x32c7, 0x00},
    {0x32c8, 0x87},
    {0x32c9, 0x00},
    {0x3330, 0x03},
    {0x3331, 0xc8},
    {0x3332, 0x02},
    {0x3333, 0x24},
    {0x3334, 0x00},
    {0x3335, 0x00},
    {0x3336, 0x00},
    {0x3337, 0x00},
    {0x3338, 0x03},
    {0x3339, 0xc8},
    {0x333a, 0x02},
    {0x333b, 0x24},
    {0x333c, 0x00},
    {0x333d, 0x00},
    {0x333e, 0x00},
    {0x333f, 0x00},
    {0x3340, 0x03},
    {0x3341, 0xc8},
    {0x3342, 0x02},
    {0x3343, 0x24},
    {0x3344, 0x00},
    {0x3345, 0x00},
    {0x3346, 0x00},
    {0x3347, 0x00},
    {0x3348, 0x40},
    {0x3349, 0x00},
    {0x334a, 0x00},
    {0x334b, 0x00},
    {0x334c, 0x00},
    {0x334d, 0x00},
    {0x334e, 0x80},
    {0x3360, 0x01},
    {0x3361, 0x00},
    {0x3362, 0x01},
    {0x3363, 0x00},
    {0x3364, 0x01},
    {0x3365, 0x00},
    {0x3366, 0x01},
    {0x3367, 0x00},
    {0x3368, 0x01},
    {0x3369, 0x00},
    {0x336a, 0x01},
    {0x336b, 0x00},
    {0x336c, 0x01},
    {0x336d, 0x00},
    {0x336e, 0x01},
    {0x336f, 0x00},
    {0x3370, 0x01},
    {0x3371, 0x00},
    {0x3372, 0x01},
    {0x3373, 0x00},
    {0x3374, 0x01},
    {0x3375, 0x00},
    {0x3376, 0x01},
    {0x3377, 0x00},
    {0x3378, 0x00},
    {0x3379, 0x00},
    {0x337a, 0x00},
    {0x337b, 0x00},
    {0x337c, 0x00},
    {0x337d, 0x00},
    {0x337e, 0x00},
    {0x337f, 0x00},
    {0x3380, 0x00},
    {0x3381, 0x00},
    {0x3382, 0x00},
    {0x3383, 0x00},
    {0x3384, 0x00},
    {0x3385, 0x00},
    {0x3386, 0x00},
    {0x3387, 0x00},
    {0x3388, 0x00},
    {0x3389, 0x00},
    {0x338a, 0x00},
    {0x338b, 0x00},
    {0x338c, 0x00},
    {0x338d, 0x00},
    {0x338e, 0x00},
    {0x338f, 0x00},
    {0x3390, 0x00},
    {0x3391, 0x00},
    {0x3392, 0x00},
    {0x3393, 0x00},
    {0x3394, 0x00},
    {0x3395, 0x00},
    {0x3396, 0x00},
    {0x3397, 0x00},
    {0x3398, 0x00},
    {0x3399, 0x00},
    {0x339a, 0x00},
    {0x339b, 0x00},
    {0x33b0, 0x00},
    {0x33b1, 0x50},
    {0x33b2, 0x01},
    {0x33b3, 0xff},
    {0x33b4, 0xe0},
    {0x33b5, 0x6b},
    {0x33b6, 0x00},
    {0x33b7, 0x00},
    {0x33b8, 0x00},
    {0x33b9, 0x00},
    {0x33ba, 0x00},
    {0x33bb, 0x1f},
    {0x33bc, 0x01},
    {0x33bd, 0x01},
    {0x33be, 0x01},
    {0x33bf, 0x01},
    {0x33c0, 0x00},
    {0x33c1, 0x00},
    {0x33c2, 0x00},
    {0x33c3, 0x00},
    {0x33e0, 0x14},
    {0x33e1, 0x0f},
    {0x33e2, 0x04},
    {0x33e3, 0x02},
    {0x33e4, 0x01},
    {0x33e5, 0x01},
    {0x33e6, 0x00},
    {0x33e7, 0x04},
    {0x33e8, 0x0c},
    {0x33e9, 0x02},
    {0x33ea, 0x02},
    {0x33eb, 0x02},
    {0x33ec, 0x03},
    {0x33ed, 0x02},
    {0x33ee, 0x05},
    {0x33ef, 0x0a},
    {0x33f0, 0x08},
    {0x33f1, 0x04},
    {0x33f2, 0x04},
    {0x33f3, 0x00},
    {0x33f4, 0x03},
    {0x33f5, 0x14},
    {0x33f6, 0x0f},
    {0x33f7, 0x02},
    {0x33f8, 0x01},
    {0x33f9, 0x01},
    {0x33fa, 0x01},
    {0x33fb, 0x00},
    {0x33fc, 0x04},
    {0x33fd, 0x0c},
    {0x33fe, 0x02},
    {0x33ff, 0x02},
    {0x3400, 0x02},
    {0x3401, 0x03},
    {0x3402, 0x01},
    {0x3403, 0x02},
    {0x3404, 0x08},
    {0x3405, 0x08},
    {0x3406, 0x04},
    {0x3407, 0x04},
    {0x3408, 0x00},
    {0x3409, 0x03},
    {0x340a, 0x14},
    {0x340b, 0x0f},
    {0x340c, 0x04},
    {0x340d, 0x02},
    {0x340e, 0x01},
    {0x340f, 0x01},
    {0x3410, 0x00},
    {0x3411, 0x04},
    {0x3412, 0x0c},
    {0x3413, 0x02},
    {0x3414, 0x02},
    {0x3415, 0x02},
    {0x3416, 0x03},
    {0x3417, 0x02},
    {0x3418, 0x05},
    {0x3419, 0x0a},
    {0x341a, 0x08},
    {0x341b, 0x04},
    {0x341c, 0x04},
    {0x341d, 0x00},
    {0x341e, 0x03},
    {0x3440, 0x00},
    {0x3441, 0x00},
    {0x3442, 0x00},
    {0x3443, 0x00},
    {0x3444, 0x02},
    {0x3445, 0xf0},
    {0x3446, 0x02},
    {0x3447, 0x08},
    {0x3448, 0x00},
    {0x3460, 0x40},
    {0x3461, 0x40},
    {0x3462, 0x40},
    {0x3463, 0x40},
    {0x3464, 0x03},
    {0x3465, 0x01},
    {0x3466, 0x01},
    {0x3467, 0x02},
    {0x3468, 0x30},
    {0x3469, 0x00},
    {0x346a, 0x35},
    {0x346b, 0x00},
    {0x3480, 0x40},
    {0x3481, 0x00},
    {0x3482, 0x00},
    {0x3483, 0x00},
    {0x3484, 0x0d},
    {0x3485, 0x00},
    {0x3486, 0x00},
    {0x3487, 0x00},
    {0x3488, 0x00},
    {0x3489, 0x00},
    {0x348a, 0x00},
    {0x348b, 0x04},
    {0x348c, 0x00},
    {0x348d, 0x01},
    {0x348f, 0x01},
    {0x3030, 0x0a},
    {0x3030, 0x02},
    {0x7000, 0x58},
    {0x7001, 0x7a},
    {0x7002, 0x1a},
    {0x7003, 0xc1},
    {0x7004, 0x03},
    {0x7005, 0xda},
    {0x7006, 0xbd},
    {0x7007, 0x03},
    {0x7008, 0xbd},
    {0x7009, 0x06},
    {0x700a, 0xe6},
    {0x700b, 0xec},
    {0x700c, 0xbc},
    {0x700d, 0xff},
    {0x700e, 0xbc},
    {0x700f, 0x73},
    {0x7010, 0xda},
    {0x7011, 0x72},
    {0x7012, 0x76},
    {0x7013, 0xb6},
    {0x7014, 0xee},
    {0x7015, 0xcf},
    {0x7016, 0xac},
    {0x7017, 0xd0},
    {0x7018, 0xac},
    {0x7019, 0xd1},
    {0x701a, 0x50},
    {0x701b, 0xac},
    {0x701c, 0xd2},
    {0x701d, 0xbc},
    {0x701e, 0x2e},
    {0x701f, 0xb4},
    {0x7020, 0x00},
    {0x7021, 0xdc},
    {0x7022, 0xdf},
    {0x7023, 0xb0},
    {0x7024, 0x6e},
    {0x7025, 0xbd},
    {0x7026, 0x01},
    {0x7027, 0xd7},
    {0x7028, 0xed},
    {0x7029, 0xe1},
    {0x702a, 0x36},
    {0x702b, 0x30},
    {0x702c, 0xd3},
    {0x702d, 0x2e},
    {0x702e, 0x54},
    {0x702f, 0x46},
    {0x7030, 0xbc},
    {0x7031, 0x22},
    {0x7032, 0x66},
    {0x7033, 0xbc},
    {0x7034, 0x24},
    {0x7035, 0x2c},
    {0x7036, 0x28},
    {0x7037, 0xbc},
    {0x7038, 0x3c},
    {0x7039, 0xa1},
    {0x703a, 0xac},
    {0x703b, 0xd8},
    {0x703c, 0xd6},
    {0x703d, 0xb4},
    {0x703e, 0x04},
    {0x703f, 0x46},
    {0x7040, 0xb7},
    {0x7041, 0x04},
    {0x7042, 0xbe},
    {0x7043, 0x08},
    {0x7044, 0xc3},
    {0x7045, 0xd9},
    {0x7046, 0xad},
    {0x7047, 0xc3},
    {0x7048, 0xbc},
    {0x7049, 0x19},
    {0x704a, 0xc1},
    {0x704b, 0x27},
    {0x704c, 0xe7},
    {0x704d, 0x00},
    {0x704e, 0x50},
    {0x704f, 0x20},
    {0x7050, 0xb8},
    {0x7051, 0x02},
    {0x7052, 0xbc},
    {0x7053, 0x17},
    {0x7054, 0xdb},
    {0x7055, 0xc7},
    {0x7056, 0xb8},
    {0x7057, 0x00},
    {0x7058, 0x28},
    {0x7059, 0x54},
    {0x705a, 0xb4},
    {0x705b, 0x14},
    {0x705c, 0xab},
    {0x705d, 0xbe},
    {0x705e, 0x06},
    {0x705f, 0xd8},
    {0x7060, 0xd6},
    {0x7061, 0x00},
    {0x7062, 0xb4},
    {0x7063, 0xc7},
    {0x7064, 0x07},
    {0x7065, 0xb9},
    {0x7066, 0x05},
    {0x7067, 0xee},
    {0x7068, 0xe6},
    {0x7069, 0xad},
    {0x706a, 0xb4},
    {0x706b, 0x26},
    {0x706c, 0x19},
    {0x706d, 0xc1},
    {0x706e, 0x3a},
    {0x706f, 0xc3},
    {0x7070, 0xaf},
    {0x7071, 0x00},
    {0x7072, 0xc0},
    {0x7073, 0x3c},
    {0x7074, 0xc3},
    {0x7075, 0xbe},
    {0x7076, 0xe7},
    {0x7077, 0x00},
    {0x7078, 0x15},
    {0x7079, 0xc2},
    {0x707a, 0x40},
    {0x707b, 0xc3},
    {0x707c, 0xa4},
    {0x707d, 0xc0},
    {0x707e, 0x3c},
    {0x707f, 0x00},
    {0x7080, 0xb9},
    {0x7081, 0x64},
    {0x7082, 0x29},
    {0x7083, 0x00},
    {0x7084, 0xb8},
    {0x7085, 0x12},
    {0x7086, 0xbe},
    {0x7087, 0x01},
    {0x7088, 0xd0},
    {0x7089, 0xbc},
    {0x708a, 0x01},
    {0x708b, 0xac},
    {0x708c, 0x37},
    {0x708d, 0xd2},
    {0x708e, 0xac},
    {0x708f, 0x45},
    {0x7090, 0xad},
    {0x7091, 0x28},
    {0x7092, 0x00},
    {0x7093, 0xb8},
    {0x7094, 0x00},
    {0x7095, 0xbc},
    {0x7096, 0x01},
    {0x7097, 0x36},
    {0x7098, 0xd3},
    {0x7099, 0x30},
    {0x709a, 0x04},
    {0x709b, 0xe0},
    {0x709c, 0xd8},
    {0x709d, 0xb4},
    {0x709e, 0xe9},
    {0x709f, 0x00},
    {0x70a0, 0xbe},
    {0x70a1, 0x05},
    {0x70a2, 0x62},
    {0x70a3, 0x07},
    {0x70a4, 0xb9},
    {0x70a5, 0x05},
    {0x70a6, 0xad},
    {0x70a7, 0xc3},
    {0x70a8, 0xcf},
    {0x70a9, 0x00},
    {0x70aa, 0x15},
    {0x70ab, 0xc2},
    {0x70ac, 0x59},
    {0x70ad, 0xc3},
    {0x70ae, 0xc9},
    {0x70af, 0xc0},
    {0x70b0, 0x55},
    {0x70b1, 0x00},
    {0x70b2, 0x46},
    {0x70b3, 0xa1},
    {0x70b4, 0xb9},
    {0x70b5, 0x64},
    {0x70b6, 0x29},
    {0x70b7, 0x00},
    {0x70b8, 0xb8},
    {0x70b9, 0x02},
    {0x70ba, 0xbe},
    {0x70bb, 0x02},
    {0x70bc, 0xd0},
    {0x70bd, 0xdc},
    {0x70be, 0xac},
    {0x70bf, 0xbc},
    {0x70c0, 0x01},
    {0x70c1, 0x37},
    {0x70c2, 0xac},
    {0x70c3, 0xd2},
    {0x70c4, 0x45},
    {0x70c5, 0xad},
    {0x70c6, 0x28},
    {0x70c7, 0x00},
    {0x70c8, 0xb8},
    {0x70c9, 0x00},
    {0x70ca, 0xbc},
    {0x70cb, 0x01},
    {0x70cc, 0x36},
    {0x70cd, 0x30},
    {0x70ce, 0xe0},
    {0x70cf, 0xd8},
    {0x70d0, 0xb5},
    {0x70d1, 0x0b},
    {0x70d2, 0xd6},
    {0x70d3, 0xbe},
    {0x70d4, 0x07},
    {0x70d5, 0x00},
    {0x70d6, 0x62},
    {0x70d7, 0x07},
    {0x70d8, 0xb9},
    {0x70d9, 0x05},
    {0x70da, 0xad},
    {0x70db, 0xc3},
    {0x70dc, 0xcf},
    {0x70dd, 0x46},
    {0x70de, 0xcd},
    {0x70df, 0x07},
    {0x70e0, 0xcd},
    {0x70e1, 0x00},
    {0x70e2, 0xe3},
    {0x70e3, 0x18},
    {0x70e4, 0xc2},
    {0x70e5, 0xa2},
    {0x70e6, 0xb9},
    {0x70e7, 0x64},
    {0x70e8, 0xd1},
    {0x70e9, 0xdd},
    {0x70ea, 0xac},
    {0x70eb, 0xcf},
    {0x70ec, 0xdf},
    {0x70ed, 0xb5},
    {0x70ee, 0x19},
    {0x70ef, 0x46},
    {0x70f0, 0x50},
    {0x70f1, 0xb6},
    {0x70f2, 0xee},
    {0x70f3, 0xe8},
    {0x70f4, 0xe6},
    {0x70f5, 0xbc},
    {0x70f6, 0x31},
    {0x70f7, 0xe1},
    {0x70f8, 0x36},
    {0x70f9, 0x30},
    {0x70fa, 0xd3},
    {0x70fb, 0x2e},
    {0x70fc, 0x54},
    {0x70fd, 0xbd},
    {0x70fe, 0x03},
    {0x70ff, 0xec},
    {0x7100, 0x2c},
    {0x7101, 0x50},
    {0x7102, 0x20},
    {0x7103, 0x04},
    {0x7104, 0xb8},
    {0x7105, 0x02},
    {0x7106, 0xbc},
    {0x7107, 0x18},
    {0x7108, 0xc7},
    {0x7109, 0xb8},
    {0x710a, 0x00},
    {0x710b, 0x28},
    {0x710c, 0x54},
    {0x710d, 0xbc},
    {0x710e, 0x02},
    {0x710f, 0xb4},
    {0x7110, 0xda},
    {0x7111, 0xbe},
    {0x7112, 0x04},
    {0x7113, 0xd6},
    {0x7114, 0xd8},
    {0x7115, 0xab},
    {0x7116, 0x00},
    {0x7117, 0x62},
    {0x7118, 0x07},
    {0x7119, 0xb9},
    {0x711a, 0x05},
    {0x711b, 0xad},
    {0x711c, 0xc3},
    {0x711d, 0xbc},
    {0x711e, 0xe7},
    {0x711f, 0xb9},
    {0x7120, 0x64},
    {0x7121, 0x29},
    {0x7122, 0x00},
    {0x7123, 0xb8},
    {0x7124, 0x02},
    {0x7125, 0xbe},
    {0x7126, 0x00},
    {0x7127, 0x45},
    {0x7128, 0xad},
    {0x7129, 0xe2},
    {0x712a, 0x28},
    {0x712b, 0x00},
    {0x712c, 0xb8},
    {0x712d, 0x00},
    {0x712e, 0xe0},
    {0x712f, 0xd8},
    {0x7130, 0xb4},
    {0x7131, 0xe9},
    {0x7132, 0xbe},
    {0x7133, 0x03},
    {0x7134, 0x00},
    {0x7135, 0x30},
    {0x7136, 0x62},
    {0x7137, 0x07},
    {0x7138, 0xb9},
    {0x7139, 0x05},
    {0x713a, 0xad},
    {0x713b, 0xc3},
    {0x713c, 0xcf},
    {0x713d, 0x42},
    {0x713e, 0xe4},
    {0x713f, 0xcd},
    {0x7140, 0x07},
    {0x7141, 0xcd},
    {0x7142, 0x00},
    {0x7143, 0x00},
    {0x7144, 0x17},
    {0x7145, 0xc2},
    {0x7146, 0xbb},
    {0x7147, 0xde},
    {0x7148, 0xcf},
    {0x7149, 0xdf},
    {0x714a, 0xac},
    {0x714b, 0xd1},
    {0x714c, 0x44},
    {0x714d, 0xac},
    {0x714e, 0xb9},
    {0x714f, 0x76},
    {0x7150, 0xb8},
    {0x7151, 0x08},
    {0x7152, 0xb6},
    {0x7153, 0xfe},
    {0x7154, 0xb4},
    {0x7155, 0xca},
    {0x7156, 0xd6},
    {0x7157, 0xd8},
    {0x7158, 0xab},
    {0x7159, 0x00},
    {0x715a, 0xe1},
    {0x715b, 0x36},
    {0x715c, 0x30},
    {0x715d, 0xd3},
    {0x715e, 0xbc},
    {0x715f, 0x29},
    {0x7160, 0xb4},
    {0x7161, 0x1f},
    {0x7162, 0xaa},
    {0x7163, 0xbd},
    {0x7164, 0x01},
    {0x7165, 0xb8},
    {0x7166, 0x0c},
    {0x7167, 0x45},
    {0x7168, 0xa4},
    {0x7169, 0xbd},
    {0x716a, 0x03},
    {0x716b, 0xec},
    {0x716c, 0xbc},
    {0x716d, 0x3d},
    {0x716e, 0xc3},
    {0x716f, 0xcf},
    {0x7170, 0x42},
    {0x7171, 0xb8},
    {0x7172, 0x00},
    {0x7173, 0xe4},
    {0x7174, 0xd5},
    {0x7175, 0x00},
    {0x7176, 0xb6},
    {0x7177, 0x00},
    {0x7178, 0x74},
    {0x7179, 0xbd},
    {0x717a, 0x03},
    {0x717b, 0xb5},
    {0x717c, 0x39},
    {0x717d, 0x40},
    {0x717e, 0x58},
    {0x717f, 0xdd},
    {0x7180, 0x19},
    {0x7181, 0xc1},
    {0x7182, 0xc8},
    {0x7183, 0xbd},
    {0x7184, 0x06},
    {0x7185, 0x17},
    {0x7186, 0xc1},
    {0x7187, 0xc6},
    {0x7188, 0xe8},
    {0x7189, 0x00},
    {0x718a, 0xc0},
    {0x718b, 0xc8},
    {0x718c, 0xe6},
    {0x718d, 0x95},
    {0x718e, 0x15},
    {0x718f, 0x00},
    {0x7190, 0xbc},
    {0x7191, 0x19},
    {0x7192, 0xb9},
    {0x7193, 0xf6},
    {0x7194, 0x14},
    {0x7195, 0xc1},
    {0x7196, 0xd0},
    {0x7197, 0xd1},
    {0x7198, 0xac},
    {0x7199, 0x37},
    {0x719a, 0xbc},
    {0x719b, 0x35},
    {0x719c, 0x36},
    {0x719d, 0x30},
    {0x719e, 0xe1},
    {0x719f, 0xd3},
    {0x71a0, 0x7a},
    {0x71a1, 0xb6},
    {0x71a2, 0x0c},
    {0x71a3, 0xff},
    {0x71a4, 0xb4},
    {0x71a5, 0xc7},
    {0x71a6, 0xd9},
    {0x71a7, 0x00},
    {0x71a8, 0xbd},
    {0x71a9, 0x01},
    {0x71aa, 0x56},
    {0x71ab, 0xc0},
    {0x71ac, 0xda},
    {0x71ad, 0xb4},
    {0x71ae, 0x1f},
    {0x71af, 0x56},
    {0x71b0, 0xaa},
    {0x71b1, 0xbc},
    {0x71b2, 0x08},
    {0x71b3, 0x00},
    {0x71b4, 0x57},
    {0x71b5, 0xe8},
    {0x71b6, 0xb5},
    {0x71b7, 0x36},
    {0x71b8, 0x00},
    {0x71b9, 0x54},
    {0x71ba, 0xe7},
    {0x71bb, 0xc8},
    {0x71bc, 0xb4},
    {0x71bd, 0x1f},
    {0x71be, 0x56},
    {0x71bf, 0xaa},
    {0x71c0, 0xbc},
    {0x71c1, 0x08},
    {0x71c2, 0x57},
    {0x71c3, 0x00},
    {0x71c4, 0xb5},
    {0x71c5, 0x36},
    {0x71c6, 0x00},
    {0x71c7, 0x54},
    {0x71c8, 0xc8},
    {0x71c9, 0xb5},
    {0x71ca, 0x18},
    {0x71cb, 0xd9},
    {0x71cc, 0x00},
    {0x71cd, 0xbd},
    {0x71ce, 0x01},
    {0x71cf, 0x56},
    {0x71d0, 0x08},
    {0x71d1, 0x57},
    {0x71d2, 0xe8},
    {0x71d3, 0xb4},
    {0x71d4, 0x42},
    {0x71d5, 0x00},
    {0x71d6, 0x54},
    {0x71d7, 0xe7},
    {0x71d8, 0xc8},
    {0x71d9, 0xab},
    {0x71da, 0x00},
    {0x71db, 0x66},
    {0x71dc, 0x62},
    {0x71dd, 0x06},
    {0x71de, 0x74},
    {0x71df, 0xb9},
    {0x71e0, 0x05},
    {0x71e1, 0xb7},
    {0x71e2, 0x14},
    {0x71e3, 0x0e},
    {0x71e4, 0xb7},
    {0x71e5, 0x04},
    {0x71e6, 0xc8},
    {0x7600, 0x04},
    {0x7601, 0x80},
    {0x7602, 0x07},
    {0x7603, 0x44},
    {0x7604, 0x05},
    {0x7605, 0x33},
    {0x7606, 0x0f},
    {0x7607, 0x00},
    {0x7608, 0x07},
    {0x7609, 0x40},
    {0x760a, 0x04},
    {0x760b, 0xe5},
    {0x760c, 0x06},
    {0x760d, 0x50},
    {0x760e, 0x04},
    {0x760f, 0xe4},
    {0x7610, 0x00},
    {0x7611, 0x00},
    {0x7612, 0x06},
    {0x7613, 0x5c},
    {0x7614, 0x00},
    {0x7615, 0x0f},
    {0x7616, 0x06},
    {0x7617, 0x1c},
    {0x7618, 0x00},
    {0x7619, 0x02},
    {0x761a, 0x06},
    {0x761b, 0xa2},
    {0x761c, 0x00},
    {0x761d, 0x01},
    {0x761e, 0x06},
    {0x761f, 0xae},
    {0x7620, 0x00},
    {0x7621, 0x0e},
    {0x7622, 0x05},
    {0x7623, 0x30},
    {0x7624, 0x07},
    {0x7625, 0x00},
    {0x7626, 0x0f},
    {0x7627, 0x00},
    {0x7628, 0x04},
    {0x7629, 0xe5},
    {0x762a, 0x05},
    {0x762b, 0x33},
    {0x762c, 0x06},
    {0x762d, 0x12},
    {0x762e, 0x00},
    {0x762f, 0x01},
    {0x7630, 0x06},
    {0x7631, 0x52},
    {0x7632, 0x00},
    {0x7633, 0x01},
    {0x7634, 0x06},
    {0x7635, 0x5e},
    {0x7636, 0x04},
    {0x7637, 0xe4},
    {0x7638, 0x00},
    {0x7639, 0x01},
    {0x763a, 0x05},
    {0x763b, 0x30},
    {0x763c, 0x0f},
    {0x763d, 0x00},
    {0x763e, 0x06},
    {0x763f, 0xa6},
    {0x7640, 0x00},
    {0x7641, 0x02},
    {0x7642, 0x06},
    {0x7643, 0x26},
    {0x7644, 0x00},
    {0x7645, 0x02},
    {0x7646, 0x05},
    {0x7647, 0x33},
    {0x7648, 0x06},
    {0x7649, 0x20},
    {0x764a, 0x0f},
    {0x764b, 0x00},
    {0x764c, 0x06},
    {0x764d, 0x56},
    {0x764e, 0x00},
    {0x764f, 0x02},
    {0x7650, 0x06},
    {0x7651, 0x16},
    {0x7652, 0x05},
    {0x7653, 0x33},
    {0x7654, 0x06},
    {0x7655, 0x10},
    {0x7656, 0x0f},
    {0x7657, 0x00},
    {0x7658, 0x06},
    {0x7659, 0x10},
    {0x765a, 0x0f},
    {0x765b, 0x00},
    {0x765c, 0x06},
    {0x765d, 0x20},
    {0x765e, 0x0f},
    {0x765f, 0x00},
    {0x7660, 0x00},
    {0x7661, 0x00},
    {0x7662, 0x00},
    {0x7663, 0x02},
    {0x7664, 0x04},
    {0x7665, 0xe5},
    {0x7666, 0x04},
    {0x7667, 0xe4},
    {0x7668, 0x0f},
    {0x7669, 0x00},
    {0x766a, 0x00},
    {0x766b, 0x00},
    {0x766c, 0x00},
    {0x766d, 0x01},
    {0x766e, 0x04},
    {0x766f, 0xe5},
    {0x7670, 0x04},
    {0x7671, 0xe4},
    {0x7672, 0x0f},
    {0x7673, 0x00},
    {0x7674, 0x00},
    {0x7675, 0x02},
    {0x7676, 0x04},
    {0x7677, 0xe4},
    {0x7678, 0x00},
    {0x7679, 0x02},
    {0x767a, 0x04},
    {0x767b, 0xc4},
    {0x767c, 0x00},
    {0x767d, 0x02},
    {0x767e, 0x04},
    {0x767f, 0xc4},
    {0x7680, 0x05},
    {0x7681, 0x83},
    {0x7682, 0x0f},
    {0x7683, 0x00},
    {0x7684, 0x00},
    {0x7685, 0x02},
    {0x7686, 0x04},
    {0x7687, 0xe4},
    {0x7688, 0x00},
    {0x7689, 0x02},
    {0x768a, 0x04},
    {0x768b, 0xc4},
    {0x768c, 0x00},
    {0x768d, 0x02},
    {0x768e, 0x04},
    {0x768f, 0xc4},
    {0x7690, 0x05},
    {0x7691, 0x83},
    {0x7692, 0x03},
    {0x7693, 0x0b},
    {0x7694, 0x05},
    {0x7695, 0x83},
    {0x7696, 0x00},
    {0x7697, 0x07},
    {0x7698, 0x05},
    {0x7699, 0x03},
    {0x769a, 0x00},
    {0x769b, 0x05},
    {0x769c, 0x05},
    {0x769d, 0x32},
    {0x769e, 0x05},
    {0x769f, 0x30},
    {0x76a0, 0x00},
    {0x76a1, 0x02},
    {0x76a2, 0x05},
    {0x76a3, 0x78},
    {0x76a4, 0x00},
    {0x76a5, 0x01},
    {0x76a6, 0x05},
    {0x76a7, 0x7c},
    {0x76a8, 0x03},
    {0x76a9, 0x9a},
    {0x76aa, 0x05},
    {0x76ab, 0x83},
    {0x76ac, 0x00},
    {0x76ad, 0x04},
    {0x76ae, 0x05},
    {0x76af, 0x03},
    {0x76b0, 0x00},
    {0x76b1, 0x03},
    {0x76b2, 0x05},
    {0x76b3, 0x32},
    {0x76b4, 0x05},
    {0x76b5, 0x30},
    {0x76b6, 0x00},
    {0x76b7, 0x02},
    {0x76b8, 0x05},
    {0x76b9, 0x78},
    {0x76ba, 0x00},
    {0x76bb, 0x01},
    {0x76bc, 0x05},
    {0x76bd, 0x7c},
    {0x76be, 0x03},
    {0x76bf, 0x99},
    {0x76c0, 0x05},
    {0x76c1, 0x83},
    {0x76c2, 0x00},
    {0x76c3, 0x03},
    {0x76c4, 0x05},
    {0x76c5, 0x03},
    {0x76c6, 0x00},
    {0x76c7, 0x01},
    {0x76c8, 0x05},
    {0x76c9, 0x32},
    {0x76ca, 0x05},
    {0x76cb, 0x30},
    {0x76cc, 0x00},
    {0x76cd, 0x02},
    {0x76ce, 0x05},
    {0x76cf, 0x78},
    {0x76d0, 0x00},
    {0x76d1, 0x01},
    {0x76d2, 0x05},
    {0x76d3, 0x7c},
    {0x76d4, 0x03},
    {0x76d5, 0x98},
    {0x76d6, 0x05},
    {0x76d7, 0x83},
    {0x76d8, 0x00},
    {0x76d9, 0x00},
    {0x76da, 0x05},
    {0x76db, 0x03},
    {0x76dc, 0x00},
    {0x76dd, 0x01},
    {0x76de, 0x05},
    {0x76df, 0x32},
    {0x76e0, 0x05},
    {0x76e1, 0x30},
    {0x76e2, 0x00},
    {0x76e3, 0x02},
    {0x76e4, 0x05},
    {0x76e5, 0x78},
    {0x76e6, 0x00},
    {0x76e7, 0x01},
    {0x76e8, 0x05},
    {0x76e9, 0x7c},
    {0x76ea, 0x03},
    {0x76eb, 0x97},
    {0x76ec, 0x05},
    {0x76ed, 0x83},
    {0x76ee, 0x00},
    {0x76ef, 0x00},
    {0x76f0, 0x05},
    {0x76f1, 0x03},
    {0x76f2, 0x05},
    {0x76f3, 0x32},
    {0x76f4, 0x05},
    {0x76f5, 0x30},
    {0x76f6, 0x00},
    {0x76f7, 0x02},
    {0x76f8, 0x05},
    {0x76f9, 0x78},
    {0x76fa, 0x00},
    {0x76fb, 0x01},
    {0x76fc, 0x05},
    {0x76fd, 0x7c},
    {0x76fe, 0x03},
    {0x76ff, 0x96},
    {0x7700, 0x05},
    {0x7701, 0x83},
    {0x7702, 0x05},
    {0x7703, 0x03},
    {0x7704, 0x05},
    {0x7705, 0x32},
    {0x7706, 0x05},
    {0x7707, 0x30},
    {0x7708, 0x00},
    {0x7709, 0x02},
    {0x770a, 0x05},
    {0x770b, 0x78},
    {0x770c, 0x00},
    {0x770d, 0x01},
    {0x770e, 0x05},
    {0x770f, 0x7c},
    {0x7710, 0x03},
    {0x7711, 0x95},
    {0x7712, 0x05},
    {0x7713, 0x83},
    {0x7714, 0x05},
    {0x7715, 0x03},
    {0x7716, 0x05},
    {0x7717, 0x32},
    {0x7718, 0x05},
    {0x7719, 0x30},
    {0x771a, 0x00},
    {0x771b, 0x02},
    {0x771c, 0x05},
    {0x771d, 0x78},
    {0x771e, 0x00},
    {0x771f, 0x01},
    {0x7720, 0x05},
    {0x7721, 0x7c},
    {0x7722, 0x03},
    {0x7723, 0x94},
    {0x7724, 0x05},
    {0x7725, 0x83},
    {0x7726, 0x00},
    {0x7727, 0x01},
    {0x7728, 0x05},
    {0x7729, 0x03},
    {0x772a, 0x00},
    {0x772b, 0x01},
    {0x772c, 0x05},
    {0x772d, 0x32},
    {0x772e, 0x05},
    {0x772f, 0x30},
    {0x7730, 0x00},
    {0x7731, 0x02},
    {0x7732, 0x05},
    {0x7733, 0x78},
    {0x7734, 0x00},
    {0x7735, 0x01},
    {0x7736, 0x05},
    {0x7737, 0x7c},
    {0x7738, 0x03},
    {0x7739, 0x93},
    {0x773a, 0x05},
    {0x773b, 0x83},
    {0x773c, 0x00},
    {0x773d, 0x00},
    {0x773e, 0x05},
    {0x773f, 0x03},
    {0x7740, 0x00},
    {0x7741, 0x00},
    {0x7742, 0x05},
    {0x7743, 0x32},
    {0x7744, 0x05},
    {0x7745, 0x30},
    {0x7746, 0x00},
    {0x7747, 0x02},
    {0x7748, 0x05},
    {0x7749, 0x78},
    {0x774a, 0x00},
    {0x774b, 0x01},
    {0x774c, 0x05},
    {0x774d, 0x7c},
    {0x774e, 0x03},
    {0x774f, 0x92},
    {0x7750, 0x05},
    {0x7751, 0x83},
    {0x7752, 0x05},
    {0x7753, 0x03},
    {0x7754, 0x00},
    {0x7755, 0x00},
    {0x7756, 0x05},
    {0x7757, 0x32},
    {0x7758, 0x05},
    {0x7759, 0x30},
    {0x775a, 0x00},
    {0x775b, 0x02},
    {0x775c, 0x05},
    {0x775d, 0x78},
    {0x775e, 0x00},
    {0x775f, 0x01},
    {0x7760, 0x05},
    {0x7761, 0x7c},
    {0x7762, 0x03},
    {0x7763, 0x91},
    {0x7764, 0x05},
    {0x7765, 0x83},
    {0x7766, 0x05},
    {0x7767, 0x03},
    {0x7768, 0x05},
    {0x7769, 0x32},
    {0x776a, 0x05},
    {0x776b, 0x30},
    {0x776c, 0x00},
    {0x776d, 0x02},
    {0x776e, 0x05},
    {0x776f, 0x78},
    {0x7770, 0x00},
    {0x7771, 0x01},
    {0x7772, 0x05},
    {0x7773, 0x7c},
    {0x7774, 0x03},
    {0x7775, 0x90},
    {0x7776, 0x05},
    {0x7777, 0x83},
    {0x7778, 0x05},
    {0x7779, 0x03},
    {0x777a, 0x05},
    {0x777b, 0x32},
    {0x777c, 0x05},
    {0x777d, 0x30},
    {0x777e, 0x00},
    {0x777f, 0x02},
    {0x7780, 0x05},
    {0x7781, 0x78},
    {0x7782, 0x00},
    {0x7783, 0x01},
    {0x7784, 0x05},
    {0x7785, 0x7c},
    {0x7786, 0x02},
    {0x7787, 0x90},
    {0x7788, 0x05},
    {0x7789, 0x03},
    {0x778a, 0x07},
    {0x778b, 0x00},
    {0x778c, 0x0f},
    {0x778d, 0x00},
    {0x778e, 0x08},
    {0x778f, 0x30},
    {0x7790, 0x08},
    {0x7791, 0xee},
    {0x7792, 0x0f},
    {0x7793, 0x00},
    {0x7794, 0x05},
    {0x7795, 0x33},
    {0x7796, 0x04},
    {0x7797, 0xe5},
    {0x7798, 0x06},
    {0x7799, 0x52},
    {0x779a, 0x04},
    {0x779b, 0xe4},
    {0x779c, 0x00},
    {0x779d, 0x00},
    {0x779e, 0x06},
    {0x779f, 0x5e},
    {0x77a0, 0x00},
    {0x77a1, 0x0f},
    {0x77a2, 0x06},
    {0x77a3, 0x1e},
    {0x77a4, 0x00},
    {0x77a5, 0x02},
    {0x77a6, 0x06},
    {0x77a7, 0xa2},
    {0x77a8, 0x00},
    {0x77a9, 0x01},
    {0x77aa, 0x06},
    {0x77ab, 0xae},
    {0x77ac, 0x00},
    {0x77ad, 0x03},
    {0x77ae, 0x05},
    {0x77af, 0x30},
    {0x77b0, 0x09},
    {0x77b1, 0x19},
    {0x77b2, 0x0f},
    {0x77b3, 0x00},
    {0x77b4, 0x05},
    {0x77b5, 0x33},
    {0x77b6, 0x04},
    {0x77b7, 0xe5},
    {0x77b8, 0x06},
    {0x77b9, 0x52},
    {0x77ba, 0x04},
    {0x77bb, 0xe4},
    {0x77bc, 0x00},
    {0x77bd, 0x00},
    {0x77be, 0x06},
    {0x77bf, 0x5e},
    {0x77c0, 0x00},
    {0x77c1, 0x0f},
    {0x77c2, 0x06},
    {0x77c3, 0x1e},
    {0x77c4, 0x00},
    {0x77c5, 0x02},
    {0x77c6, 0x06},
    {0x77c7, 0xa2},
    {0x77c8, 0x00},
    {0x77c9, 0x01},
    {0x77ca, 0x06},
    {0x77cb, 0xae},
    {0x77cc, 0x00},
    {0x77cd, 0x03},
    {0x77ce, 0x05},
    {0x77cf, 0x30},
    {0x77d0, 0x0f},
    {0x77d1, 0x00},
    {0x77d2, 0x00},
    {0x77d3, 0x00},
    {0x77d4, 0x00},
    {0x77d5, 0x02},
    {0x77d6, 0x04},
    {0x77d7, 0xe5},
    {0x77d8, 0x04},
    {0x77d9, 0xe4},
    {0x77da, 0x05},
    {0x77db, 0x33},
    {0x77dc, 0x07},
    {0x77dd, 0x10},
    {0x77de, 0x00},
    {0x77df, 0x00},
    {0x77e0, 0x01},
    {0x77e1, 0xbb},
    {0x77e2, 0x00},
    {0x77e3, 0x00},
    {0x77e4, 0x01},
    {0x77e5, 0xaa},
    {0x77e6, 0x00},
    {0x77e7, 0x00},
    {0x77e8, 0x01},
    {0x77e9, 0x99},
    {0x77ea, 0x00},
    {0x77eb, 0x00},
    {0x77ec, 0x01},
    {0x77ed, 0x88},
    {0x77ee, 0x00},
    {0x77ef, 0x00},
    {0x77f0, 0x01},
    {0x77f1, 0x77},
    {0x77f2, 0x00},
    {0x77f3, 0x00},
    {0x77f4, 0x01},
    {0x77f5, 0x66},
    {0x77f6, 0x00},
    {0x77f7, 0x00},
    {0x77f8, 0x01},
    {0x77f9, 0x55},
    {0x77fa, 0x00},
    {0x77fb, 0x00},
    {0x77fc, 0x01},
    {0x77fd, 0x44},
    {0x77fe, 0x00},
    {0x77ff, 0x00},
    {0x7800, 0x01},
    {0x7801, 0x33},
    {0x7802, 0x00},
    {0x7803, 0x00},
    {0x7804, 0x01},
    {0x7805, 0x22},
    {0x7806, 0x00},
    {0x7807, 0x00},
    {0x7808, 0x01},
    {0x7809, 0x11},
    {0x780a, 0x00},
    {0x780b, 0x00},
    {0x780c, 0x01},
    {0x780d, 0x00},
    {0x780e, 0x01},
    {0x780f, 0xff},
    {0x7810, 0x07},
    {0x7811, 0x00},
    {0x7812, 0x02},
    {0x7813, 0xa0},
    {0x7814, 0x0f},
    {0x7815, 0x00},
    {0x7816, 0x08},
    {0x7817, 0x35},
    {0x7818, 0x06},
    {0x7819, 0x52},
    {0x781a, 0x04},
    {0x781b, 0xe4},
    {0x781c, 0x00},
    {0x781d, 0x00},
    {0x781e, 0x06},
    {0x781f, 0x5e},
    {0x7820, 0x05},
    {0x7821, 0x33},
    {0x7822, 0x09},
    {0x7823, 0x19},
    {0x7824, 0x06},
    {0x7825, 0x1e},
    {0x7826, 0x05},
    {0x7827, 0x33},
    {0x7828, 0x00},
    {0x7829, 0x01},
    {0x782a, 0x06},
    {0x782b, 0x24},
    {0x782c, 0x06},
    {0x782d, 0x20},
    {0x782e, 0x0f},
    {0x782f, 0x00},
    {0x7830, 0x08},
    {0x7831, 0x35},
    {0x7832, 0x07},
    {0x7833, 0x10},
    {0x7834, 0x00},
    {0x7835, 0x00},
    {0x7836, 0x01},
    {0x7837, 0xbb},
    {0x7838, 0x00},
    {0x7839, 0x00},
    {0x783a, 0x01},
    {0x783b, 0xaa},
    {0x783c, 0x00},
    {0x783d, 0x00},
    {0x783e, 0x01},
    {0x783f, 0x99},
    {0x7840, 0x00},
    {0x7841, 0x00},
    {0x7842, 0x01},
    {0x7843, 0x88},
    {0x7844, 0x00},
    {0x7845, 0x00},
    {0x7846, 0x01},
    {0x7847, 0x77},
    {0x7848, 0x00},
    {0x7849, 0x00},
    {0x784a, 0x01},
    {0x784b, 0x66},
    {0x784c, 0x00},
    {0x784d, 0x00},
    {0x784e, 0x01},
    {0x784f, 0x55},
    {0x7850, 0x00},
    {0x7851, 0x00},
    {0x7852, 0x01},
    {0x7853, 0x44},
    {0x7854, 0x00},
    {0x7855, 0x00},
    {0x7856, 0x01},
    {0x7857, 0x33},
    {0x7858, 0x00},
    {0x7859, 0x00},
    {0x785a, 0x01},
    {0x785b, 0x22},
    {0x785c, 0x00},
    {0x785d, 0x00},
    {0x785e, 0x01},
    {0x785f, 0x11},
    {0x7860, 0x00},
    {0x7861, 0x00},
    {0x7862, 0x01},
    {0x7863, 0x00},
    {0x7864, 0x07},
    {0x7865, 0x00},
    {0x7866, 0x01},
    {0x7867, 0xff},
    {0x7868, 0x02},
    {0x7869, 0xa0},
    {0x786a, 0x0f},
    {0x786b, 0x00},
    {0x786c, 0x08},
    {0x786d, 0x3a},
    {0x786e, 0x08},
    {0x786f, 0x6a},
    {0x7870, 0x0f},
    {0x7871, 0x00},
    {0x7872, 0x04},
    {0x7873, 0xc0},
    {0x7874, 0x09},
    {0x7875, 0x19},
    {0x7876, 0x04},
    {0x7877, 0x99},
    {0x7878, 0x07},
    {0x7879, 0x14},
    {0x787a, 0x00},
    {0x787b, 0x01},
    {0x787c, 0x04},
    {0x787d, 0xa4},
    {0x787e, 0x00},
    {0x787f, 0x07},
    {0x7880, 0x04},
    {0x7881, 0xa6},
    {0x7882, 0x00},
    {0x7883, 0x00},
    {0x7884, 0x04},
    {0x7885, 0xa0},
    {0x7886, 0x04},
    {0x7887, 0x80},
    {0x7888, 0x04},
    {0x7889, 0x00},
    {0x788a, 0x05},
    {0x788b, 0x03},
    {0x788c, 0x06},
    {0x788d, 0x00},
    {0x788e, 0x0f},
    {0x788f, 0x00},
    {0x7890, 0x0f},
    {0x7891, 0x00},
    {0x7892, 0x0f},
    {0x7893, 0x00},
    {0x30a0, 0x00},
    {0x30a1, 0x00},
    {0x30a2, 0x00},
    {0x30a3, 0x00},
    {0x30a4, 0x07},
    {0x30a5, 0x8f},
    {0x30a6, 0x04},
    {0x30a7, 0x47},
    {0x30a8, 0x00},
    {0x30a9, 0x05},
    {0x30aa, 0x00},
    {0x30ab, 0x04},
    {0x30ac, 0x07},
    {0x30ad, 0x80},
    {0x30ae, 0x04},
    {0x30af, 0x38},
    {0x30b0, 0x0d},
    {0x30b1, 0xde},
    {0x30b2, 0x04},
    {0x30b3, 0x66},
    {0x30b6, 0x04},
    {0x30b7, 0x62},
    {0x3196, 0x00},
    {0x3197, 0x0a},
    {0x3195, 0x2e},
    {0x30bb, 0x14},
    {0x315a, 0x02},
    {0x315b, 0x00},
    {0x315c, 0x01},
    {0x315d, 0x80},
    {0x315e, 0x01},
    {0x315f, 0x80},
    {0x3250, 0xf7},
    {0x3012, 0x00},

	{0x30a8, 0x00},
	{0x30a9, 0x08},
	{0x30aa, 0x00},
	{0x30ab, 0x08},
	
	{0x30c0, 0x08},
	{0x3252, 0x20},
};

#endif
