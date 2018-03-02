# aarch64-linux.mk
#
# Created on: 2016-08-25
#     Author: lenovo-march=armv8-a

## 定义编译命
PLATFORM_NAME := aarch64-linux
COMPILE_CROSS := aarch64-linux-gnu-
## 编译静态库
AR := $(COMPILE_CROSS)ar
ARFLAGS := -rv
ARM_CXOPTS = -mfpu=soft
## 编译obj
CC := $(COMPILE_CROSS)gcc
CPP := $(COMPILE_CROSS)g++
CXX := $(COMPILE_CROSS)g++
CPPFLAGS := 
CFLAGS := -O3 -Wall  -g -rdynamic   -mcpu=cortex-a53 -std=gnu99 -pedantic -fdata-sections -ffunction-sections  -Wno-narrowing  
CXXFLAGS := -O3 -Wall -g -rdynamic    -mcpu=cortex-a53   -std=gnu++0x  -pedantic -fdata-sections -ffunction-sections  -Wno-narrowing  
                                      		 				 
## 链接命令
LD := $(CXX)
LDLIBS := 
LDFLAGS := 

PTHREAD := -lpthread -lrt  -lm
