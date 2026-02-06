#
# SPDX-FileCopyrightText: The LineageOS Project
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit_only.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

# Inherit from flame device
$(call inherit-product, device/xiaomi/flame/device.mk)

# Device identifiers
PRODUCT_DEVICE := flame
PRODUCT_NAME := lineage_flame
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := 2411DRN47I
PRODUCT_MANUFACTURER := Xiaomi

PRODUCT_BUILD_PROP_OVERRIDES += \
    BuildDesc="flame_in-user 16 BP2A.250605.031.A3 OS3.0.302.0.WGUINXM release-keys" \
    BuildFingerprint=Redmi/flame_in/flame:16/BP2A.250605.031.A3/OS3.0.302.0.WGUINXM:user/release-keys \
    DeviceName=flame \
    DeviceProduct=flame_in

# GMS
PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
