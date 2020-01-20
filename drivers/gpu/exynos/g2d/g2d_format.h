/*
 * linux/drivers/gpu/exynos/g2d/g2d_format.h
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *
 * Samsung Graphics 2D driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __G2D_FORMAT_H__
#define __G2D_FORMAT_H__

/* TODO: check the ARGB order */
#define G2D_SWZ_MASK		0xFFFF

#define G2D_SWZ_ARGB		(0x3210)
#define G2D_SWZ_ABGR		(0x3012)
#define G2D_SWZ_xBGR		(0x5012)
#define G2D_SWZ_xRGB		(0x5210)

#define G2D_YUVORDER_MASK	(0x3 << 24)

#define G2D_YUV_UV		((1 << 24) | G2D_SWZ_ARGB)
#define G2D_YUV_VU		((0 << 24) | G2D_SWZ_ARGB)
#define G2D_YUV_YC		(0 << 25)
#define G2D_YUV_CY		(1 << 25)

#define G2D_DATAFMT_SHIFT	16
#define G2D_DATAFMT_MASK	(0xF << G2D_DATAFMT_SHIFT)

#define G2D_FMT_IDX_8888		0
#define G2D_FMT_IDX_565			1
#define G2D_FMT_IDX_4444		2
#define G2D_FMT_IDX_888			3
#define G2D_FMT_IDX_1555		4
#define G2D_FMT_IDX_5551		5
#define G2D_FMT_IDX_MAX_RGB		6

#define G2D_FMT_IDX_8			6
#define G2D_FMT_IDX_RESERVED		7

#define G2D_FMT_IDX_MIN_YUV		8
#define G2D_FMT_IDX_YUV420SP		8
#define G2D_FMT_IDX_YUV420P		9
#define G2D_FMT_IDX_YUV422I		10
#define G2D_FMT_IDX_YUV422SP		11
#define G2D_FMT_IDX_P010_9810		12
#define G2D_FMT_IDX_YUV420SP82_9810	13
#define G2D_FMT_IDX_MAX_YUV		13

#define G2D_FMT_IDX_2101010		14
#define G2D_FMT_IDX_1010102		15

#define G2D_FMT_IDX_MAX			16

#define G2D_DATAFMT(idx) ((idx) << G2D_DATAFMT_SHIFT)

#define G2D_DATAFMT_8888		G2D_DATAFMT(G2D_FMT_IDX_8888)
#define G2D_DATAFMT_565			G2D_DATAFMT(G2D_FMT_IDX_565)
#define G2D_DATAFMT_4444		G2D_DATAFMT(G2D_FMT_IDX_4444)
#define G2D_DATAFMT_888			G2D_DATAFMT(G2D_FMT_IDX_888)
#define G2D_DATAFMT_1555		G2D_DATAFMT(G2D_FMT_IDX_1555)
#define G2D_DATAFMT_5551		G2D_DATAFMT(G2D_FMT_IDX_5551)
#define G2D_DATAFMT_8			G2D_DATAFMT(G2D_FMT_IDX_8)
#define G2D_DATAFMT_RESERVED		G2D_DATAFMT(G2D_FMT_IDX_RESERVED)
#define G2D_DATAFMT_YUV_MIN		G2D_DATAFMT(G2D_FMT_IDX_MIN_YUV)
#define G2D_DATAFMT_YUV420SP		G2D_DATAFMT(G2D_FMT_IDX_YUV420SP)
#define G2D_DATAFMT_YUV420P		G2D_DATAFMT(G2D_FMT_IDX_YUV420P)
#define G2D_DATAFMT_YUV422I		G2D_DATAFMT(G2D_FMT_IDX_YUV422I)
#define G2D_DATAFMT_YUV422SP		G2D_DATAFMT(G2D_FMT_IDX_YUV422SP)
#define G2D_DATAFMT_P010_9810		G2D_DATAFMT(G2D_FMT_IDX_P010_9810)
#define G2D_DATAFMT_YUV420SP82_9810	G2D_DATAFMT(G2D_FMT_IDX_YUV420SP82_9810)
#define G2D_DATAFMT_YUV_MAX		G2D_DATAFMT(G2D_FMT_IDX_MAX_YUV)
#define G2D_DATAFMT_2101010		G2D_DATAFMT(G2D_FMT_IDX_1010102)
#define G2D_DATAFMT_1010102		G2D_DATAFMT(G2D_FMT_IDX_2101010)

// YCBCR Bitdepth selection is available from Exynos9820
#define G2D_YCBCR_BITDEPTH_SHIFT 28
#define G2D_YCBCR_BITDEPTH_MASK  (0x3 << G2D_YCBCR_BITDEPTH_SHIFT)
#define G2D_FMT_8	(0 << G2D_YCBCR_BITDEPTH_SHIFT)
#define G2D_FMT_10	(1 << G2D_YCBCR_BITDEPTH_SHIFT)
#define G2D_FMT_82	(2 << G2D_YCBCR_BITDEPTH_SHIFT)

#define G2D_FMT_ARGB8888	(G2D_DATAFMT_8888 | G2D_SWZ_ARGB)
#define G2D_FMT_ABGR8888	(G2D_DATAFMT_8888 | G2D_SWZ_ABGR)
#define G2D_FMT_XBGR8888	(G2D_DATAFMT_8888 | G2D_SWZ_xBGR)
#define G2D_FMT_XRGB8888	(G2D_DATAFMT_8888 | G2D_SWZ_xRGB)
#define G2D_FMT_ARGB4444	(G2D_DATAFMT_4444 | G2D_SWZ_ARGB)
#define G2D_FMT_ARGB1555	(G2D_DATAFMT_1555 | G2D_SWZ_ARGB)
#define G2D_FMT_RGB565		(G2D_DATAFMT_565 | G2D_SWZ_xRGB)
#define G2D_FMT_BGR565		(G2D_DATAFMT_565 | G2D_SWZ_xBGR)
#define G2D_FMT_RGB888		(G2D_DATAFMT_888 | G2D_SWZ_xRGB)
#define G2D_FMT_BGR888		(G2D_DATAFMT_888 | G2D_SWZ_BGR)
#define G2D_FMT_NV12		(G2D_DATAFMT_YUV420SP | G2D_YUV_UV)
#define G2D_FMT_NV21		(G2D_DATAFMT_YUV420SP | G2D_YUV_VU)
#define G2D_FMT_YV12		(G2D_DATAFMT_YUV420P | G2D_YUV_VU)
#define G2D_FMT_YUYV		(G2D_DATAFMT_YUV422I | G2D_YUV_YC | G2D_YUV_UV)
#define G2D_FMT_YVYU		(G2D_DATAFMT_YUV422I | G2D_YUV_YC | G2D_YUV_VU)
#define G2D_FMT_UYVY		(G2D_DATAFMT_YUV422I | G2D_YUV_CY | G2D_YUV_UV)
#define G2D_FMT_VYUY		(G2D_DATAFMT_YUV422I | G2D_YUV_CY | G2D_YUV_VU)
#define G2D_FMT_NV16		(G2D_DATAFMT_YUV422SP | G2D_YUV_UV)
#define G2D_FMT_NV61		(G2D_DATAFMT_YUV422SP | G2D_YUV_VU)
#define G2D_FMT_NV12_82_9810	(G2D_DATAFMT_YUV420SP82_9810 | G2D_YUV_UV)
#define G2D_FMT_NV21_82_9810	(G2D_DATAFMT_YUV420SP82_9810 | G2D_YUV_VU)
#define G2D_FMT_NV12_82_9820	(G2D_DATAFMT_YUV420SP | G2D_FMT_82 | G2D_YUV_UV)
#define G2D_FMT_NV21_82_9820	(G2D_DATAFMT_YUV420SP | G2D_FMT_82 | G2D_YUV_VU)
#define G2D_FMT_NV12_P010_9810	(G2D_DATAFMT_P010_9810 | G2D_YUV_UV)
#define G2D_FMT_NV21_P010_9810	(G2D_DATAFMT_P010_9810 | G2D_YUV_VU)
#define G2D_FMT_NV12_P010_9820	(G2D_DATAFMT_YUV420SP | G2D_FMT_10 | G2D_YUV_UV)
#define G2D_FMT_NV21_P010_9820	(G2D_DATAFMT_YUV420SP | G2D_FMT_10 | G2D_YUV_VU)
#define G2D_FMT_NV16_P210_9820	(G2D_DATAFMT_YUV422SP | G2D_FMT_10 | G2D_YUV_UV)
#define G2D_FMT_NV61_P210_9820	(G2D_DATAFMT_YUV422SP | G2D_FMT_10 | G2D_YUV_VU)
#define G2D_FMT_ABGR2101010	(G2D_DATAFMT_2101010 | G2D_SWZ_ABGR)
#define G2D_FMT_ABGR1010102	(G2D_DATAFMT_1010102 | G2D_SWZ_ABGR)

#define G2D_DATAFORMAT_AFBC	(1 << 20)
#define G2D_DATAFORMAT_UORDER	(1 << 21)
#define G2D_DATAFORMAT_SBWC	(1 << 22)

#define IS_AFBC(fmt)	((fmt & G2D_DATAFORMAT_AFBC) != 0)
#define IS_SBWC(fmt)	((fmt & G2D_DATAFORMAT_SBWC) != 0)
#define IS_UORDER(fmt)	((fmt & G2D_DATAFORMAT_UORDER) != 0)
#define IS_YUV(fmt)	((((fmt) & G2D_DATAFMT_MASK) >= G2D_DATAFMT_YUV_MIN) &&\
			(((fmt) & G2D_DATAFMT_MASK) <= G2D_DATAFMT_YUV_MAX))
#define IS_YUV420(fmt)	((((fmt) >> G2D_DATAFMT_SHIFT) & 0xF) == 0x8)
#define IS_YUV422(fmt)	((((fmt) >> G2D_DATAFMT_SHIFT) & 0xE) == 0xA)
#define IS_YUV422_2P(fmt)	((((fmt) >> G2D_DATAFMT_SHIFT) & 0xF) == 0xB)
#define IS_RGB(fmt)	((((fmt) & G2D_DATAFMT_MASK) < G2D_DATAFMT_8) ||\
			(((fmt) & G2D_DATAFMT_MASK) > G2D_DATAFMT_YUV_MAX))

#define IS_YUV_82_9810(fmt) \
		(((fmt) & G2D_DATAFMT_MASK) == G2D_DATAFMT_YUV420SP82_9810)
#define IS_YUV_P10_9810(fmt) \
		(((fmt) & G2D_DATAFMT_MASK) == G2D_DATAFMT_P010_9810)

#define IS_YUV_82_9820(fmt) (((fmt) & G2D_YCBCR_BITDEPTH_MASK) == G2D_FMT_82)
#define IS_YUV_P10_9820(fmt) (((fmt) & G2D_YCBCR_BITDEPTH_MASK) == G2D_FMT_10)

#define IS_YUV_P10(fmt, bitdepthfield) \
		(!(bitdepthfield) ? IS_YUV_P10_9810(fmt) : IS_YUV_P10_9820(fmt))
#define IS_YUV_82(fmt, bitdepthfield) \
		(!(bitdepthfield) ? IS_YUV_82_9810(fmt) : IS_YUV_82_9820(fmt))

#define IS_SBWC_WIDTH_ALIGNED(width)	IS_ALIGNED((width), 32)
#define IS_SBWC_HEIGHT_ALIGNED(height)	IS_ALIGNED((height), 4)
/* SBWC top and bottom coordinate should be aligned by 8 */
#define IS_SBWC_HEIGHT_420_ALIGNED(height) IS_ALIGNED((height), 8)

#define G2D_IMGFMT(value) ((value) & (G2D_YCBCR_BITDEPTH_MASK | \
			   G2D_DATAFMT_MASK | G2D_YUVORDER_MASK | G2D_SWZ_MASK))

#define G2D_MAX_PLANES	4

#define G2D_MAX_SIZE	8192

#endif /* __G2D_FORMAT_H__ */
