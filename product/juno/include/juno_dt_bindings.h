/*
 * Arm SCP/MCP Software
 * Copyright (c) 2019-2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef JUNO_DT_BINDINGS_H
#define JUNO_DT_BINDINGS_H

#include "juno_mmap.h"

/* Level 0 */
#define POWER_DOMAIN_IDX_BIG_CPU0       0
#define POWER_DOMAIN_IDX_BIG_CPU1       1
#define POWER_DOMAIN_IDX_LITTLE_CPU0    2
#define POWER_DOMAIN_IDX_LITTLE_CPU1    3
#define POWER_DOMAIN_IDX_LITTLE_CPU2    4
#define POWER_DOMAIN_IDX_LITTLE_CPU3    5

    /* Level 1 */
#define POWER_DOMAIN_IDX_BIG_SSTOP      6
#define POWER_DOMAIN_IDX_LITTLE_SSTOP   7
#define POWER_DOMAIN_IDX_DBGSYS         8
#define POWER_DOMAIN_IDX_GPUTOP         9

    /* Level 2 */
#define POWER_DOMAIN_IDX_SYSTOP         10

#define POWER_DOMAIN_IDX_NONE           0xffffffff


/* from juno_clock_ids.h */ 
/* Juno clock indices */
#define JUNO_CLOCK_IDX_I2SCLK       0
#define JUNO_CLOCK_IDX_HDLCDREFCLK  1
#define JUNO_CLOCK_IDX_HDLCDPXL     2
#define JUNO_CLOCK_IDX_HDLCD0       3
#define JUNO_CLOCK_IDX_HDLCD1       4
#define JUNO_CLOCK_IDX_BIGCLK       5
#define JUNO_CLOCK_IDX_LITTLECLK    6
#define JUNO_CLOCK_IDX_GPUCLK       7
    
/* Juno CDCEL937 clock indices */
    /*
     * Generated clocks:
     * These clocks are generated through this driver.
     */
#define JUNO_CLOCK_CDCEL937_IDX_I2SCLK      0
#define JUNO_CLOCK_CDCEL937_IDX_HDLCDREFCLK 1
#define JUNO_CLOCK_CDCEL937_IDX_HDLCDPXL    2

    /*
     * Derived clocks:
     * These clocks are used only as reference for
     * the HDLCD module acting as a HAL.
     */
#define JUNO_CLOCK_CDCEL937_IDX_HDLCD0      3
#define JUNO_CLOCK_CDCEL937_IDX_HDLCD1      4

/* Juno HDLCD clock indices */
#define JUNO_CLOCK_HDLCD_IDX_HDLCD0         0
#define JUNO_CLOCK_HDLCD_IDX_HDLCD1         1

/* Juno SOC clock indices for the RAM firmware */
#define JUNO_CLOCK_SOC_RAM_IDX_BIGCLK       0
#define JUNO_CLOCK_SOC_RAM_IDX_LITTLECLK    1
#define JUNO_CLOCK_SOC_RAM_IDX_GPUCLK       2
#define JUNO_CLOCK_SOC_RAM_IDX_COUNT        3

/* mod_juno_cdcel937.h */
#define MOD_JUNO_CDCEL937_API_IDX_CLOCK_DRIVER 0
#define MOD_JUNO_CDCEL937_API_IDX_HDLCD_DRIVER 1

/* mod_juno_hdlcd.h */
#define MOD_JUNO_HDLCD_API_IDX_CLOCK_DRIVER             0
#define MOD_JUNO_HDLCD_API_IDX_HDLCD_DRIVER_RESPONSE    1
#define MOD_JUNO_HDLCD_API_COUNT                        2

/* mod_juno_soc_clock_ram.h */
#define MOD_JUNO_SOC_CLOCK_RAM_API_IDX_DRIVER   0
#define MOD_JUNO_SOC_CLOCK_RAM_API_IDX_COUNT    1

/* -- juno_power_domain.h -- */
/* Mask for the core valid power states */
#define JUNO_CORE_VALID_STATE_MASK (MOD_PD_STATE_OFF_MASK | \
                                    MOD_PD_STATE_ON_MASK | \
                                    MOD_PD_STATE_SLEEP_MASK)

/* Mask for the cluster valid power states */
#define JUNO_CLUSTER_VALID_STATE_MASK (MOD_PD_STATE_OFF_MASK | \
                                       MOD_PD_STATE_ON_MASK)

/* -- juno_ppu_idx.h -- */
    /* enum juno_ppu_idx  */
#define JUNO_PPU_DEV_IDX_BIG_CPU0       0
#define JUNO_PPU_DEV_IDX_BIG_CPU1       1
#define JUNO_PPU_DEV_IDX_BIG_SSTOP      2
#define JUNO_PPU_DEV_IDX_LITTLE_CPU0    3
#define JUNO_PPU_DEV_IDX_LITTLE_CPU1    4
#define JUNO_PPU_DEV_IDX_LITTLE_CPU2    5
#define JUNO_PPU_DEV_IDX_LITTLE_CPU3    6
#define JUNO_PPU_DEV_IDX_LITTLE_SSTOP   7
#define JUNO_PPU_DEV_IDX_GPUTOP         8
#define JUNO_PPU_DEV_IDX_SYSTOP         9
#define JUNO_PPU_DEV_IDX_DBGSYS         10
#define JUNO_PPU_DEV_IDX_COUNT          11

/* ---- */

/* -- mod_juno_ppu.h -- */
    /* enum mod_juno_ppu_api_idx */
#define MOD_JUNO_PPU_API_IDX_PD     0
#define MOD_JUNO_PPU_API_IDX_ROM    1
#define MOD_JUNO_PPU_API_COUNT      2

/* ---- */

#endif /* JUNO_DT_BINDINGS_H */
