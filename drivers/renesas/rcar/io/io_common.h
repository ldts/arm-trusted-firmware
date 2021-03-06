/*
 * Copyright (c) 2015-2017, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef IO_COMMON_H__
#define IO_COMMON_H__

typedef struct io_drv_spec {
	size_t offset;
	size_t length;
	uint32_t partition;
} io_drv_spec_t;

#endif
