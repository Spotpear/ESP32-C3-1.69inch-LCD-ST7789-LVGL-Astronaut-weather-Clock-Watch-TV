/*******************************************************************************
 * Size: 35 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/
#include "lvgl.h"

#ifndef SYZT_35
#define SYZT_35 1
#endif

#if SYZT_35

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+003A ":" */
    0x2, 0xbf, 0xd5, 0x0, 0xef, 0xff, 0xf5, 0x5f,
    0xff, 0xff, 0xb7, 0xff, 0xff, 0xfd, 0x4f, 0xff,
    0xff, 0xa0, 0xbf, 0xff, 0xe2, 0x0, 0x69, 0x71,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xa8,
    0x10, 0xb, 0xff, 0xfe, 0x24, 0xff, 0xff, 0xfa,
    0x7f, 0xff, 0xff, 0xd5, 0xff, 0xff, 0xfb, 0xe,
    0xff, 0xff, 0x50, 0x2b, 0xfd, 0x50,

    /* U+4E00 "一" */
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x5c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf5, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x5c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf5, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x30,

    /* U+4E09 "三" */
    0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x20, 0x0,
    0xe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0xe,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x11, 0x11, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x11, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4, 0x44, 0x44, 0x44,
    0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
    0x44, 0x44, 0x44, 0x41, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x6e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf6, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x6e, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf5,

    /* U+4E8C "二" */
    0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x0,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x20, 0x0, 0x0, 0x1, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x91, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb,
    0xbb, 0xbb, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+4E94 "五" */
    0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x30, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0xee, 0xee, 0xee, 0xee, 0xef, 0xff, 0xff,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xd0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xfb,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xf9,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xf4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x22, 0x22, 0x22, 0x8f, 0xff, 0xf4,
    0x22, 0x22, 0x22, 0x43, 0x20, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xee, 0xee, 0xef, 0xff, 0xff, 0xfe,
    0xee, 0xee, 0xff, 0xff, 0xf5, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff, 0x50,
    0x0, 0x0, 0x2f, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x3f, 0xff, 0xf3, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xfc, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xf9, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xf6, 0x0,
    0x0, 0x0, 0x9f, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0xdf, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0xef, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20,

    /* U+516D "六" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0x72, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x7c,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xa, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcf, 0xff, 0xb3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xd7, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf7, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x71, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x1f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x52, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x1, 0x86, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xe9, 0x40,
    0x0, 0x0, 0x18, 0xff, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xff, 0xfb,
    0x0, 0x0, 0x8, 0xff, 0xff, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xff,
    0x20, 0x0, 0x0, 0xd, 0xff, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0x20,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff,
    0xf2, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xef, 0xff,
    0xf9, 0x0, 0x0, 0x0, 0x0, 0x1, 0xef, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff,
    0xfe, 0x10, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff,
    0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x1e, 0xff,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0x90, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0xff, 0x30, 0x0, 0x8, 0xff,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xdf, 0xff, 0xfd, 0x0, 0x6, 0xff,
    0xff, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0xf7, 0x3, 0xff,
    0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa, 0xff, 0xff, 0xf1, 0x8,
    0xff, 0xff, 0x50, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1f, 0xff, 0xf9, 0x10,
    0x3, 0xdf, 0x90, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xa2, 0x0,
    0x0, 0x0, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x30, 0x0,
    0x0,

    /* U+5468 "周" */
    0x0, 0x0, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xef, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x0, 0x0, 0x2,
    0xaa, 0xa7, 0x0, 0x0, 0x0, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x0, 0x0, 0x4,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x13, 0x33, 0x36,
    0xff, 0xfb, 0x33, 0x33, 0x30, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x0, 0x0, 0x4,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x60, 0x0, 0x0, 0x4,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x63, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xbf, 0xff, 0x63, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xcf, 0xff, 0x53, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xcf, 0xff, 0x40, 0x44, 0x44, 0x44,
    0x44, 0x44, 0x44, 0x44, 0x44, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xdf, 0xff, 0x40, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xff, 0xff, 0x30, 0xc, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0x70, 0xe, 0xff, 0xf3,
    0x0, 0x0, 0xff, 0xff, 0x10, 0xe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0x2, 0xff, 0xff, 0x0, 0xe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0x4, 0xff, 0xfd, 0x0, 0xe, 0xff, 0xe4,
    0x44, 0x44, 0x8f, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0x8, 0xff, 0xfb, 0x0, 0xe, 0xff, 0xd0,
    0x0, 0x0, 0x4f, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0xc, 0xff, 0xf8, 0x0, 0xe, 0xff, 0xd0,
    0x0, 0x0, 0x4f, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0x1f, 0xff, 0xf3, 0x0, 0xe, 0xff, 0xd2,
    0x22, 0x22, 0x6f, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0x5f, 0xff, 0xf0, 0x0, 0xe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x0, 0xbf, 0xff, 0xb0, 0x0, 0xe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xe, 0xff, 0xf3,
    0x3, 0xff, 0xff, 0x70, 0x0, 0xe, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0xf, 0xff, 0xf3,
    0xc, 0xff, 0xff, 0x10, 0x0, 0xe, 0xff, 0xd0,
    0x0, 0x0, 0x0, 0xac, 0xcc, 0xdf, 0xff, 0xf2,
    0x1d, 0xff, 0xfa, 0x0, 0x0, 0x7, 0x88, 0x60,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xf0,
    0x1, 0xbf, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xff, 0xff, 0xff, 0x70,
    0x0, 0xa, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xfd, 0xa4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+56DB "四" */
    0x3e, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x23,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x3f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x33, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x3f, 0xff,
    0xf1, 0x11, 0x15, 0xff, 0xfd, 0x11, 0x1e, 0xff,
    0xf1, 0x11, 0x14, 0xff, 0xff, 0x33, 0xff, 0xff,
    0x0, 0x0, 0x4f, 0xff, 0xd0, 0x0, 0xef, 0xff,
    0x0, 0x0, 0x3f, 0xff, 0xf3, 0x3f, 0xff, 0xf0,
    0x0, 0x4, 0xff, 0xfc, 0x0, 0xe, 0xff, 0xf0,
    0x0, 0x3, 0xff, 0xff, 0x33, 0xff, 0xff, 0x0,
    0x0, 0x5f, 0xff, 0xb0, 0x0, 0xef, 0xff, 0x0,
    0x0, 0x3f, 0xff, 0xf3, 0x3f, 0xff, 0xf0, 0x0,
    0x6, 0xff, 0xfa, 0x0, 0xe, 0xff, 0xf0, 0x0,
    0x3, 0xff, 0xff, 0x33, 0xff, 0xff, 0x0, 0x0,
    0x7f, 0xff, 0x90, 0x0, 0xef, 0xff, 0x0, 0x0,
    0x3f, 0xff, 0xf3, 0x3f, 0xff, 0xf0, 0x0, 0x9,
    0xff, 0xf7, 0x0, 0xe, 0xff, 0xf0, 0x0, 0x3,
    0xff, 0xff, 0x33, 0xff, 0xff, 0x0, 0x0, 0xcf,
    0xff, 0x50, 0x0, 0xef, 0xff, 0x0, 0x0, 0x3f,
    0xff, 0xf3, 0x3f, 0xff, 0xf0, 0x0, 0xf, 0xff,
    0xf3, 0x0, 0xe, 0xff, 0xf0, 0x0, 0x3, 0xff,
    0xff, 0x33, 0xff, 0xff, 0x0, 0x5, 0xff, 0xff,
    0x0, 0x0, 0xef, 0xff, 0x0, 0x0, 0x3f, 0xff,
    0xf3, 0x3f, 0xff, 0xf0, 0x0, 0xcf, 0xff, 0xb0,
    0x0, 0xd, 0xff, 0xf0, 0x0, 0x3, 0xff, 0xff,
    0x33, 0xff, 0xff, 0x0, 0x6f, 0xff, 0xf5, 0x0,
    0x0, 0xcf, 0xff, 0xa8, 0x89, 0xbf, 0xff, 0xf3,
    0x3f, 0xff, 0xf0, 0x5f, 0xff, 0xfe, 0x0, 0x0,
    0x9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x33,
    0xff, 0xff, 0x9f, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x3f,
    0xff, 0xf8, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x3b, 0xdf, 0xff, 0xee, 0xff, 0xff, 0x33, 0xff,
    0xff, 0xa, 0xff, 0x90, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0xf3, 0x3f, 0xff,
    0xf0, 0x1d, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0xff, 0xff, 0x33, 0xff, 0xff,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xf3, 0x3f, 0xff, 0xf4,
    0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
    0x44, 0x46, 0xff, 0xff, 0x33, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf3, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x33, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf3, 0x3f, 0xff, 0xfc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcd,
    0xff, 0xff, 0x33, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f,
    0xff, 0xf3, 0x3f, 0xff, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xcc,
    0xcc, 0x20, 0x11, 0x11, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0,

    /* U+65E5 "日" */
    0x25, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55, 0x55, 0x55, 0x55, 0x46, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x6f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe6, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0x6f, 0xff, 0xfd, 0xdd, 0xdd, 0xdd,
    0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff, 0xe6, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xfe, 0x6f, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xe6,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xfe, 0x6f, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff,
    0xe6, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x8, 0xff, 0xfe, 0x6f, 0xff, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8f,
    0xff, 0xe6, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0xfe, 0x6f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x6f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xe6, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x6f, 0xff, 0xe2, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x22, 0x22, 0x9f, 0xff, 0xe6, 0xff, 0xfe, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff,
    0xfe, 0x6f, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x8f, 0xff, 0xe6, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8,
    0xff, 0xfe, 0x6f, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xe6, 0xff,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xfe, 0x6f, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8f, 0xff, 0xe6,
    0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8, 0xff, 0xfe, 0x6f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x6f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xe6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x6f, 0xff,
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0xaf, 0xff, 0xe6, 0xff, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xfe, 0x6f,
    0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8e, 0xee, 0xe0,

    /* U+FF1A "：" */
    0x0, 0x0, 0x0, 0x0, 0x2, 0xbf, 0xe7, 0x0,
    0x1e, 0xff, 0xff, 0x80, 0x6f, 0xff, 0xff, 0xe0,
    0x8f, 0xff, 0xff, 0xf0, 0x4f, 0xff, 0xff, 0xc0,
    0xa, 0xff, 0xff, 0x30, 0x0, 0x48, 0x61, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x36, 0x50, 0x0,
    0x8, 0xff, 0xfe, 0x20, 0x4f, 0xff, 0xff, 0xb0,
    0x8f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xf0,
    0x2f, 0xff, 0xff, 0x90, 0x4, 0xdf, 0xf9, 0x0,
    0x0, 0x1, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 182, .box_w = 7, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 560, .box_w = 33, .box_h = 5, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 153, .adv_w = 560, .box_w = 31, .box_h = 28, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 587, .adv_w = 560, .box_w = 33, .box_h = 26, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1016, .adv_w = 560, .box_w = 32, .box_h = 29, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1480, .adv_w = 560, .box_w = 33, .box_h = 33, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2025, .adv_w = 560, .box_w = 32, .box_h = 32, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2537, .adv_w = 560, .box_w = 31, .box_h = 30, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 3002, .adv_w = 560, .box_w = 25, .box_h = 31, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 3390, .adv_w = 560, .box_w = 8, .box_h = 25, .ofs_x = 5, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x4dc6, 0x4dcf, 0x4e52, 0x4e5a, 0x5133, 0x542e, 0x56a1,
    0x65ab, 0xfee0
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58, .range_length = 65249, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 10, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t syzt_35 = {
#else
lv_font_t syzt_35 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 34,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if SYZT_35*/
