/**
 * TinyFrame protocol library
 *
 * (c) Ondřej Hruška 2017-2018, MIT License
 * no liability/warranty, free for any use, must retain this notice & license
 *
 * Upstream URL: https://github.com/MightyPork/TinyFrame
 */

//
// Created by MightyPork on 2017/10/15.
//

#ifndef TF_UTILS_H
#define TF_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include "TinyFrame.h"

/** pointer to unsigned char */
typedef unsigned char* pu8;

/**
 * Dump a binary frame as hex, dec and ASCII
 */
void dumpFrame(const uint8_t *buff, size_t len);

/**
 * Dump message metadata (not the content)
 *
 * @param msg
 */
void dumpFrameInfo(TF_Msg *msg);

#ifdef __cplusplus
}
#endif

#endif //TF_UTILS_H
