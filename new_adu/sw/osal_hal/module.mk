# module.mk
#     Author: haibei  #
# Created on: 2016-12-21





MODULE_PATH			:= $(call current_path)
MODULE_NAME			:= liboal_hal

## 定义product定制文件
PRODUCT_SPECS := 
## 定义platform定制文件
PLATFORM_SPECS :=
## 定义target定制文件
TARGET_SPECS :=

include $(BUILD_CONFIGURE)


## 调用executable.mk，就可以自动编译得到想要的可执行文件
SRC_FILES:=  $(MODULE_PATH)/src/CLinuxCountingSem.cpp\
             $(MODULE_PATH)/src/CLinuxMutex.cpp\
             $(MODULE_PATH)/src/CLinuxMsgQueue.cpp\
             $(MODULE_PATH)/src/CLinuxTimer.cpp\
             $(MODULE_PATH)/src/CLinuxMsgQueuet.cpp\
             $(MODULE_PATH)/src/CLinuxOperatingSystem.cpp\
             $(MODULE_PATH)/src/COperatingSystemFactory.cpp\
             $(MODULE_PATH)/src/shmfifo.cpp\
             $(MODULE_PATH)/src/CThread.cpp\
             $(MODULE_PATH)/src/hal_plock.c\
			 $(MODULE_PATH)/src/ipcl.c\
             $(MODULE_PATH)/src/spi_linux.c\
             $(MODULE_PATH)/src/CRC8.c\
             $(MODULE_PATH)/src/select_timer.cpp\
			 $(MODULE_PATH)/src/hal_can.c\
             \

## 定义了如何生成可执行文件的通用规则
$(call build_target,$(BUILD_STATIC_LIBRARY),$(MODULE_PATH)/liboal_hal.a)
