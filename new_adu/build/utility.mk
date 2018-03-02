
include $(BUILD_SYSTEM_PATH)/assert.mk

## get the path of current module
#  @return current module path
define current_path
$(patsubst %/,%, \
		$(dir $(word $(words $(MAKEFILE_LIST)), $(MAKEFILE_LIST))))
endef

define copy_file_rule
  $(shell cp $(1) $(2)/)
endef

## hide command
#  wrap @
define hide
@
endef


