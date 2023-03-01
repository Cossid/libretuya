/* Copyright (c) Kuba Szczodrzyński 2022-07-12. */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef uint32_t u32;
typedef uint8_t u8;

#include <crypto/md5_i.h>
#define LT_MD5_CTX_T struct MD5Context

#ifdef __cplusplus
} // extern "C"
#endif
