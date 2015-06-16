# A simple test for the minimal standard C++ library
#

LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)
LOCAL_MODULE := cpp11regex
LOCAL_SRC_FILES := ./src/cpp11regex.cpp
LOCAL_CFLAGS := -std=gnu++11
include $(BUILD_EXECUTABLE)
