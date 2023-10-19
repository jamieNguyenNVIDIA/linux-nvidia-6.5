/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2023 ARM Limited  */
#ifndef __LINUX_ARM_SMCCC_EM_H
#define __LINUX_ARM_SMCCC_EM_H

#include <linux/types.h>

int arm_smccc_em_init(void);
int arm_smccc_em_cpu_features(u32 erratum_id);

#endif /* __LINUX_ARM_SMCCC_EM_H */
