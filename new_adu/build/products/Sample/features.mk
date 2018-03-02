# features.mk
#
# Created on: 2013-12-20
#     Author: lenovo

## 定义产品功能的开关
OPTIONS:= -fpic -DENABLE_TALKING=1 -DPRODUCT_INFO=\"$(PRODUCT_VENDOR)-$(PRODUCT_VERSION)\"


