# module.mk
#     Author: haibei  #
       
# Created on: 2016-12-21

MODULE_PATH			:= $(call current_path)
MODULE_NAME			:= adu.elf

## 定义product定制文件
PRODUCT_SPECS := 
## 定义platform定制文件
PLATFORM_SPECS :=
## 定义target定制文件
TARGET_SPECS :=

include $(BUILD_CONFIGURE)


## 调用executable.mk，就可以自动编译得到想要的可执行文件




 LDLIBS := \
           sw/osal_hal/liboal_hal.a

SRC_FILES:= $(MODULE_PATH)/src/main.cpp \
			#$(MODULE_PATH)/src/cgi/cgic.c

## 定义了如何生成可执行文件的通用规则
$(call build_target,$(BUILD_EXECUTABLE))
