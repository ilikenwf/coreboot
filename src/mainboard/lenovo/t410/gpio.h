/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2013 Vladimir Serbinenko
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

#ifndef LENOVO_T410_GPIO_H
#define LENOVO_T410_GPIO_H

#include "southbridge/intel/bd82x6x/gpio.h"

const struct pch_gpio_set1 pch_gpio_set1_mode = {
	.gpio0 = GPIO_MODE_GPIO,
	.gpio1 = GPIO_MODE_GPIO,
	.gpio2 = GPIO_MODE_GPIO,
	.gpio3 = GPIO_MODE_GPIO,
	.gpio4 = GPIO_MODE_GPIO,
	.gpio5 = GPIO_MODE_GPIO,
	.gpio6 = GPIO_MODE_GPIO,
	.gpio7 = GPIO_MODE_GPIO,
	.gpio8 = GPIO_MODE_GPIO,
	.gpio10 = GPIO_MODE_GPIO,
	.gpio13 = GPIO_MODE_GPIO,
	.gpio15 = GPIO_MODE_GPIO,
	.gpio16 = GPIO_MODE_GPIO,
	.gpio17 = GPIO_MODE_GPIO,
	.gpio21 = GPIO_MODE_GPIO,
	.gpio22 = GPIO_MODE_GPIO,
	.gpio24 = GPIO_MODE_GPIO,
	.gpio27 = GPIO_MODE_GPIO,
	.gpio28 = GPIO_MODE_GPIO,
	.gpio29 = GPIO_MODE_GPIO,
};

static const struct pch_gpio_set1 pch_gpio_set1_direction = {
	.gpio0 = GPIO_DIR_INPUT,
	.gpio1 = GPIO_DIR_INPUT,
	.gpio2 = GPIO_DIR_INPUT,
	.gpio3 = GPIO_DIR_INPUT,
	.gpio4 = GPIO_DIR_INPUT,
	.gpio5 = GPIO_DIR_INPUT,
	.gpio6 = GPIO_DIR_INPUT,
	.gpio7 = GPIO_DIR_INPUT,
	.gpio8 = GPIO_DIR_OUTPUT,
	.gpio10 = GPIO_DIR_OUTPUT,
	.gpio13 = GPIO_DIR_INPUT,
	.gpio15 = GPIO_DIR_OUTPUT,
	.gpio16 = GPIO_DIR_INPUT,
	.gpio17 = GPIO_DIR_INPUT,
	.gpio21 = GPIO_DIR_INPUT,
	.gpio22 = GPIO_DIR_OUTPUT,
	.gpio24 = GPIO_DIR_INPUT,
	.gpio27 = GPIO_DIR_OUTPUT,
	.gpio28 = GPIO_DIR_OUTPUT,
	.gpio29 = GPIO_DIR_OUTPUT,
};

static const struct pch_gpio_set1 pch_gpio_set1_level = {
	.gpio8 = GPIO_LEVEL_HIGH,
	.gpio10 = GPIO_LEVEL_HIGH,
	.gpio15 = GPIO_LEVEL_HIGH,
	.gpio22 = GPIO_LEVEL_HIGH,
	.gpio27 = GPIO_LEVEL_HIGH,
	.gpio28 = GPIO_LEVEL_HIGH,
	.gpio29 = GPIO_LEVEL_HIGH,
};

static const struct pch_gpio_set1 pch_gpio_set1_invert = {
	.gpio1 = GPIO_INVERT,
	.gpio2 = GPIO_INVERT,
	.gpio6 = GPIO_INVERT,
	.gpio7 = GPIO_INVERT,
	.gpio13 = GPIO_INVERT,
};

static const struct pch_gpio_set1 pch_gpio_set1_blink = { };

static const struct pch_gpio_set1 pch_gpio_set1_reset = {
	.gpio24 = GPIO_RESET_RSMRST,
};

static const struct pch_gpio_set2 pch_gpio_set2_mode = {
	.gpio33 = GPIO_MODE_GPIO,
	.gpio34 = GPIO_MODE_GPIO,
	.gpio35 = GPIO_MODE_GPIO,
	.gpio36 = GPIO_MODE_GPIO,
	.gpio37 = GPIO_MODE_GPIO,
	.gpio38 = GPIO_MODE_GPIO,
	.gpio39 = GPIO_MODE_GPIO,
	.gpio40 = GPIO_MODE_NATIVE,
	.gpio41 = GPIO_MODE_GPIO,
	.gpio42 = GPIO_MODE_GPIO,
	.gpio43 = GPIO_MODE_NATIVE,
	.gpio44 = GPIO_MODE_NATIVE,
	.gpio45 = GPIO_MODE_NATIVE,
	.gpio46 = GPIO_MODE_NATIVE,
	.gpio47 = GPIO_MODE_NATIVE,
	.gpio48 = GPIO_MODE_GPIO,
	.gpio49 = GPIO_MODE_GPIO,
	.gpio50 = GPIO_MODE_GPIO,
	.gpio51 = GPIO_MODE_NATIVE,
	.gpio52 = GPIO_MODE_GPIO,
	.gpio53 = GPIO_MODE_GPIO,
	.gpio54 = GPIO_MODE_GPIO,
	.gpio55 = GPIO_MODE_NATIVE,
	.gpio56 = GPIO_MODE_NATIVE,
	.gpio57 = GPIO_MODE_GPIO,
	.gpio58 = GPIO_MODE_NATIVE,
	.gpio59 = GPIO_MODE_NATIVE,
	.gpio60 = GPIO_MODE_NATIVE,
	.gpio61 = GPIO_MODE_NATIVE,
	.gpio62 = GPIO_MODE_NATIVE,
	.gpio63 = GPIO_MODE_NATIVE,
};

const struct pch_gpio_set2 pch_gpio_set2_direction = {
	.gpio32 = GPIO_DIR_OUTPUT,
	.gpio33 = GPIO_DIR_OUTPUT,
	.gpio34 = GPIO_DIR_INPUT,
	.gpio35 = GPIO_DIR_OUTPUT,
	.gpio36 = GPIO_DIR_INPUT,
	.gpio37 = GPIO_DIR_INPUT,
	.gpio38 = GPIO_DIR_INPUT,
	.gpio39 = GPIO_DIR_INPUT,
	.gpio40 = GPIO_DIR_INPUT,
	.gpio41 = GPIO_DIR_OUTPUT,
	.gpio42 = GPIO_DIR_OUTPUT,
	.gpio43 = GPIO_DIR_INPUT,
	.gpio44 = GPIO_DIR_INPUT,
	.gpio45 = GPIO_DIR_INPUT,
	.gpio46 = GPIO_DIR_INPUT,
	.gpio47 = GPIO_DIR_INPUT,
	.gpio48 = GPIO_DIR_INPUT,
	.gpio49 = GPIO_DIR_OUTPUT,
	.gpio50 = GPIO_DIR_OUTPUT,
	.gpio51 = GPIO_DIR_OUTPUT,
	.gpio52 = GPIO_DIR_OUTPUT,
	.gpio53 = GPIO_DIR_OUTPUT,
	.gpio54 = GPIO_DIR_OUTPUT,
	.gpio55 = GPIO_DIR_OUTPUT,
	.gpio56 = GPIO_DIR_INPUT,
	.gpio57 = GPIO_DIR_INPUT,
	.gpio58 = GPIO_DIR_OUTPUT,
	.gpio59 = GPIO_DIR_INPUT,
	.gpio60 = GPIO_DIR_INPUT,
	.gpio61 = GPIO_DIR_OUTPUT,
	.gpio62 = GPIO_DIR_OUTPUT,
	.gpio63 = GPIO_DIR_OUTPUT,
};

const struct pch_gpio_set2 pch_gpio_set2_level = {
	.gpio32 = GPIO_LEVEL_HIGH,
	.gpio33 = GPIO_LEVEL_HIGH,
	.gpio34 = GPIO_LEVEL_HIGH,
	.gpio35 = GPIO_LEVEL_HIGH,
	.gpio36 = GPIO_LEVEL_HIGH,
	.gpio37 = GPIO_LEVEL_HIGH,
	.gpio38 = GPIO_LEVEL_HIGH,
	.gpio39 = GPIO_LEVEL_HIGH,
	.gpio40 = GPIO_LEVEL_HIGH,
	.gpio41 = GPIO_LEVEL_HIGH,
	.gpio42 = GPIO_LEVEL_HIGH,
	.gpio43 = GPIO_LEVEL_HIGH,
	.gpio44 = GPIO_LEVEL_HIGH,
	.gpio45 = GPIO_LEVEL_HIGH,
	.gpio46 = GPIO_LEVEL_HIGH,
	.gpio47 = GPIO_LEVEL_HIGH,
	.gpio48 = GPIO_LEVEL_HIGH,
	.gpio49 = GPIO_LEVEL_HIGH,
	.gpio50 = GPIO_LEVEL_HIGH,
	.gpio51 = GPIO_LEVEL_HIGH,
	.gpio52 = GPIO_LEVEL_HIGH,
	.gpio53 = GPIO_LEVEL_LOW,
	.gpio54 = GPIO_LEVEL_LOW,
	.gpio55 = GPIO_LEVEL_HIGH,
	.gpio56 = GPIO_LEVEL_LOW,
	.gpio57 = GPIO_LEVEL_HIGH,
	.gpio58 = GPIO_LEVEL_LOW,
	.gpio59 = GPIO_LEVEL_LOW,
	.gpio60 = GPIO_LEVEL_LOW,
	.gpio61 = GPIO_LEVEL_LOW,
	.gpio62 = GPIO_LEVEL_LOW,
	.gpio63 = GPIO_LEVEL_LOW,
};

const struct pch_gpio_set3 pch_gpio_set3_mode = { };

const struct pch_gpio_set3 pch_gpio_set3_direction = { };

const struct pch_gpio_set3 pch_gpio_set3_level = { };

const struct pch_gpio_map t410_gpio_map = {
	.set1 = {
		.mode      = &pch_gpio_set1_mode,
		.direction = &pch_gpio_set1_direction,
		.level     = &pch_gpio_set1_level,
		.blink     = &pch_gpio_set1_blink,
		.invert    = &pch_gpio_set1_invert,
		.reset     = &pch_gpio_set1_reset,
	},
	.set2 = {
		.mode      = &pch_gpio_set2_mode,
		.direction = &pch_gpio_set2_direction,
		.level     = &pch_gpio_set2_level,
	},
	.set3 = {
		.mode      = &pch_gpio_set3_mode,
		.direction = &pch_gpio_set3_direction,
		.level     = &pch_gpio_set3_level,
	},
};

#endif
