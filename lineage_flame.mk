#
# Copyright (C) 2023 The Android Open Source Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Configure core_64_bit.mk
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)

# Configure full_base_telephony.mk
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit common lineage configurations
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

# Inherit device configurations
$(call inherit-product, device/xiaomi/flame/device.mk)

# Inherit from the proprietary version
$(call inherit-product, vendor/xiaomi/flame/flame-vendor.mk)

# Signing Builds
-include vendor/lineage-priv/keys/keys.mk

# Enable reserved size for vanilla builds
TARGET_INCLUDE_RESERVED_SIZE := true

#Enable Blur
TARGET_ENABLE_BLUR := true
TARGET_SUPPORTS_BLUR := true

# Boot animation
TARGET_BOOT_ANIMATION_RES := 720

## Device identifier
PRODUCT_DEVICE := flame
PRODUCT_NAME := lineage_flame
PRODUCT_BRAND := Redmi
PRODUCT_MANUFACTURER := Xiaomi

# GMS
PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
