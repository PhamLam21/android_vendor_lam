LOCAL_MODULE_SUFFIX :=.so
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_VENDOR_MODULE := true
LOCAL_CHECK_ELF_FILES := false
LOCAL_MODULE_PATH := $(TARGET_OUT_VENDOR)/lib64/
LOCAL_SRC_FILES := lib64/$(LOCAL_MODULE)$(LOCAL_MODULE_SUFFIX)