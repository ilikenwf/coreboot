/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2011 Advanced Micro Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <stdint.h>
#include <string.h>
#include <device/pci_def.h>
#include <device/pci_ids.h>
#include <arch/io.h>
#include <arch/stages.h>
#include <device/pnp_def.h>
#include <cpu/x86/lapic.h>
#include <console/console.h>
#include <commonlib/loglevel.h>
#include <cpu/amd/car.h>
#include <northbridge/amd/agesa/agesawrapper.h>
#include <northbridge/amd/agesa/agesa_helper.h>
#include <northbridge/amd/agesa/state_machine.h>
#include <cpu/x86/bist.h>
#include <superio/smsc/kbc1100/kbc1100.h>
#include <cpu/x86/lapic.h>
#include "sb_cimx.h"
#include "SbPlatform.h"
#include <arch/cpu.h>
#include "platform_cfg.h"

void cache_as_ram_main(unsigned long bist, unsigned long cpu_init_detectedx)
{
	struct sysinfo *cb = NULL;
	u32 val;

	post_code(0x35);
	amd_initmmio();

	if (!cpu_init_detectedx && boot_cpu()) {
		post_code(0x30);
		gpioEarlyInit();
		sb_poweron_init();

		post_code(0x31);

		board_BeforeAgesa(cb);

		post_code(0x32);
		post_code(0x33);
		console_init();
	}

	/* Halt if there was a built in self test failure */
	post_code(0x34);
	report_bist_failure(bist);

	// Load MPB
	val = cpuid_eax(1);
	printk(BIOS_DEBUG, "BSP Family_Model: %08x\n", val);
	printk(BIOS_DEBUG, "cpu_init_detectedx = %08lx\n", cpu_init_detectedx);

	post_code(0x36);
	agesawrapper_amdinitreset();

	post_code(0x37);
	agesawrapper_amdinitearly();

	post_code(0x38);
	agesawrapper_amdinitpost();

	post_code(0x39);
	printk(BIOS_DEBUG, "sb_before_pci_init ");
	sb_before_pci_init();
	printk(BIOS_DEBUG, "passed.\n");

	post_code(0x40);
	agesawrapper_amdinitenv();

	post_code(0x43);
	copy_and_run();
}
