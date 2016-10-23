LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := libxmlsax
LOCAL_SRC_FILES := \
 document.c \
 libxml.c \
 locator.c \
 node.c \
 utils.c \
 xpath_ctx.c \
 xpath_expr.c \
 xpath_obj.c
LOCAL_C_INCLUDES := \
$(LOCAL_PATH)/../libxml2/include \
$(LOCAL_PATH)/../libxml2/include/libxml \
$(LOCAL_PATH)/../libiconv/include \
$(LOCAL_PATH)/../libiconv \
$(LOCAL_PATH)/../libiconv/libcharset \
$(LOCAL_PATH)/../libiconv/lib \
$(LOCAL_PATH)/../libiconv/libcharset/include \
$(LOCAL_PATH)/autogen \
$(LOCAL_PATH)

LOCAL_PRELINK_MODULE := false
LOCAL_LDLIBS := -llog
LOCAL_SHARED_LIBRARIES += libicuuc libiconvx libxml2x
include $(BUILD_SHARED_LIBRARY)
#include $(BUILD_EXECUTABLE)
include $(call all-makefiles-under,$(LOCAL_PATH))