//
// Created by zhaoqun zhong on 3/22/20.
//

#ifndef SLAMAPP_NATIVE_DEBUG_H
#define SLAMAPP_NATIVE_DEBUG_H

#include <android/log.h>
// #include "opencv2/core.hpp"

#define LOG_TAG "qml"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define ASSERT(cond, fmt, ...)                                \
  if (!(cond)) {                                              \
    __android_log_assert(#cond, LOG_TAG, fmt, ##__VA_ARGS__); \
  }

#define REACH_HERE LOGW("Program reach %s %s line %d", __FILE__, __func__, __LINE__);

int start_stdcout_logger(const char *app_name);
int stop_stdcout_logger();

// extern std::string app_internal_storage;
// void saveDebugImgToPath(cv::Mat img, std::string name);

#endif //SLAMAPP_NATIVE_DEBUG_H