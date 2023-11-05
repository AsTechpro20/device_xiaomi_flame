/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT_POCO_IN    "POCO/flame_p_in/flame:15/AQ3A.250604.001/OS3.0.301.0.WGUINXM:user/release-keys"
#define FINGERPRINT_REDMI_IN   "Redmi/flame_in/flame:15/AQ3A.250604.001/OS3.0.301.0.WGUINXM:user/release-keys"
#define FINGERPRINT_REDMI_GL   "Redmi/blaze_global/blaze:15/AQ3A.250604.001/OS3.0.301.0.WGUINXM:user/release-keys"
#define FINGERPRINT_REDMI_CN   "Redmi/flame/flame:15/AQ3A.250604.001/OS3.0.301.0.WGUINXM:user/release-keys"

// Redmi 14C 5G (India)
static const variant_info_t flame_redmi_in_info = {
    .sku_value = "c3fin",

    .brand = "Redmi",
    .device = "flame",
    .marketname = "Redmi 14C 5G",
    .model = "2411DRN47I",
    .mod_device = "flame_in_global",
    .build_fingerprint = FINGERPRINT_REDMI_IN,
};

// POCO M7 5G (India)
static const variant_info_t flame_poco_info = {
    .sku_value = "c3finp",

    .brand = "POCO",
    .device = "flame",
    .marketname = "POCO M7 5G",
    .model = "24108PCE2I",
    .mod_device = "flame_p_in_global",
    .build_fingerprint = FINGERPRINT_POCO_IN,
};

// Redmi 14C 5G (Global)
static const variant_info_t flame_redmi_gl_info = {
    .sku_value = "c3fgl",

    .brand = "Redmi",
    .device = "flame",
    .marketname = "Redmi 14C 5G",
    .model = "2411DRN47G",
    .mod_device = "flame_global",
    .build_fingerprint = FINGERPRINT_REDMI_GL,
};

// Redmi 14R 5G (China)
static const variant_info_t flame_redmi_cnt_info = {
    .sku_value = "c3fcnt",

    .brand = "Redmi",
    .device = "flame",
    .marketname = "Redmi 14R 5G",
    .model = "2411DRN47C",
    .mod_device = "flame_global",
    .build_fingerprint = FINGERPRINT_REDMI_CN,
};

// Redmi 14R 5G (China alt)
static const variant_info_t flame_redmi_cn_info = {
    .sku_value = "c3fcn",

    .brand = "Redmi",
    .device = "flame",
    .marketname = "Redmi 14R 5G",
    .model = "24113RN34C",
    .mod_device = "flame_global",
    .build_fingerprint = FINGERPRINT_REDMI_CN,
};

static const std::vector<variant_info_t> variants = {
    flame_poco_info,
    flame_redmi_in_info,
    flame_redmi_gl_info,
    flame_redmi_cnt_info,
    flame_redmi_cn_info,
};

void vendor_load_properties() {
    search_variant(variants);
}