LOCAL_PATH := $(call my-dir)

# Define QML library

include $(CLEAR_VARS)
LOCAL_MODULE := QML
LOCAL_SRC_FILES := ../../lib/libQML-1.4.0.so
LOCAL_EXPORT_C_INCLUDES := ../../include
include $(PREBUILT_SHARED_LIBRARY)


# Define examples

include $(CLEAR_VARS)

LOCAL_MODULE := MinimalExample
LOCAL_SRC_FILES := ../MinimalExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)


include $(CLEAR_VARS)

LOCAL_MODULE := CBLASExample
LOCAL_SRC_FILES := ../CBLASExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)


include $(CLEAR_VARS)

LOCAL_MODULE := BLASSolveExample
LOCAL_SRC_FILES := ../BLASSolveExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)


include $(CLEAR_VARS)

LOCAL_MODULE := BigBLASExample
LOCAL_SRC_FILES := ../BigBLASExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)


include $(CLEAR_VARS)

LOCAL_MODULE := LeastSquaresExample
LOCAL_SRC_FILES := ../LeastSquaresExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)


include $(CLEAR_VARS)

LOCAL_MODULE := SVDExample
LOCAL_SRC_FILES := ../SVDExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)


include $(CLEAR_VARS)

LOCAL_MODULE := QMLInfoExample
LOCAL_SRC_FILES := ../QMLInfoExample.cpp
LOCAL_SHARED_LIBRARIES := QML

include $(BUILD_EXECUTABLE)
