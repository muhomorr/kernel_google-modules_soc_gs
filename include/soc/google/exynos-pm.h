/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
 */

#ifndef __EXYNOS_PM_H
#define __EXYNOS_PM_H

#include <linux/kernel.h>
#include <linux/notifier.h>

/*
 * Event codes for PM states
 */
enum exynos_pm_event {
	/* CPU is entering the LPA state */
	LPA_ENTER,

	/* CPU failed to enter the LPA state */
	LPA_ENTER_FAIL,

	/* CPU is exiting the LPA state */
	LPA_EXIT,
};

#define EXYNOS_PM_PREFIX	"EXYNOS-PM:"

int register_usb_is_connect(u32 (*func)(void));
int register_pcie_is_connect(u32 (*func)(void));

#ifdef CONFIG_CPU_IDLE
int exynos_pm_register_notifier(struct notifier_block *nb);
int exynos_pm_unregister_notifier(struct notifier_block *nb);
int exynos_pm_notify(enum exynos_pm_event event);
#else
static inline int exynos_pm_register_notifier(struct notifier_block *nb)
{
	return 0;
}

static inline int exynos_pm_unregister_notifier(struct notifier_block *nb)
{
	return 0;
}

static inline int exynos_pm_notify(enum exynos_pm_event event)
{
	return 0;
}
#endif

#ifdef CONFIG_EXYNOS_FLEXPMU_DBG
extern u32 acpm_get_mifdn_count(void);
extern u32 acpm_get_apsocdn_count(void);
extern u32 acpm_get_early_wakeup_count(void);
extern int acpm_get_mif_request(void);
#else
static inline int acpm_get_mif_request(void)
{
	return 0;
}
static inline u32 acpm_get_mifdn_count(void)
{
	return 0;
}
static inline u32 acpm_get_apsocdn_count(void)
{
	return 0;
}
static inline u32 acpm_get_early_wakeup_count(void)
{
	return 0;
}
#endif

#ifdef CONFIG_USB_DWC3_EXYNOS
extern u32 otg_is_connect(void);
#else
static inline u32 otg_is_connect(void)
{
	return 0;
}
#endif
#endif /* __EXYNOS_PM_H */
