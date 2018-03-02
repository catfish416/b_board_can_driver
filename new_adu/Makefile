## makefile 
#

## TARGET_PRODUCT, TARGET_PLATFORM应该由命令行参数输入，
## 这里为测试方便，直接在makefile中定义
TARGET_PRODUCT := Adu
TARGET_PLATFORM := aarch64-linux

##TARGET_PRODUCT := 
##TARGET_PLATFORM := 
## 去掉空格等字符
TARGET_PRODUCT := $(strip $(TARGET_PRODUCT))
TARGET_PLATFORM:= $(strip $(TARGET_PLATFORM))
TARGET_BUILD_TYPE:= $(strip $(TARGET_BUILD_TYPE))

BUILD_SYSTEM_PATH := build
BUILD_INC_PATH := include
SHOT_MODULE := $(shell find . -name module.mk)
ALL_HEADER := $(shell find sw -name  *.h)
#$(warning $(ALL_HEADER))
include $(BUILD_SYSTEM_PATH)/main.mk

