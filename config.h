// Copyright 2024 Bili345679 (@Bili345679)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define VENDOR_ID 0x5239
#define PRODUCT_ID 0x0009

#define LED_NUM_LOCK_PIN B14
#define LED_CAPS_LOCK_PIN B13
#define LED_SCROLL_LOCK_PIN B12
#define LED_PIN_ON_STATE 0