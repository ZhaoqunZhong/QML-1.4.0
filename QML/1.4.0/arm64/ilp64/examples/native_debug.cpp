//
// Created by 80275135 on 8/4/2020.
//
/*http://cncc.bingj.com/cache.aspx?q=use+std+cout+in+android+ndk&d=4687377020238001&mkt=en-US&setlang=en-US&w=ngI5Ze_Z6VlTktzu3WAM95_46h9ZgL4T
 * Redirect std::cout to android log output*/
#include <iostream>
#include <unistd.h>
#include <pthread.h>
// #include <opencv2/core/mat.hpp>
// #include <opencv2/opencv.hpp>
#include "native_debug.h"

static int pfd[2];
static pthread_t thr;
static const char *tag = "from-std-cout";

static void *thread_func(void*)
{
    ssize_t rdsz;
    char buf[128];
    while((rdsz = read(pfd[0], buf, sizeof buf - 1)) > 0) {
        if(buf[rdsz - 1] == '\n') --rdsz;
        buf[rdsz] = 0;  /* add null-terminator */
        __android_log_write(ANDROID_LOG_WARN, tag, buf);
    }
    return 0;
}

int start_stdcout_logger(const char *app_name)
{
    std::cout.precision(17);
    tag = app_name;

    /* make stdout line-buffered and stderr unbuffered */
    setvbuf(stdout, 0, _IOLBF, 0);
    setvbuf(stderr, 0, _IONBF, 0);

    /* create the pipe and redirect stdout and stderr */
    pipe(pfd);
    dup2(pfd[1], 1);
    dup2(pfd[1], 2);

    /* spawn the logging thread */
    if(pthread_create(&thr, 0, thread_func, 0) == -1)
        return -1;
    // pthread_detach(thr);
    return 0;
}

int stop_stdcout_logger() {
    pthread_join(thr, nullptr);
    return 0;
}

/*----------------------------------------------------------------*/
// std::string app_internal_storage = "";
// std::string img_name;
// cv::Mat img_to_save;
// pthread_t img_debug_thr;

// void* saveImgToPathRunner(void*) {
//     std::string pathname = app_internal_storage + "/" + img_name + ".png";
//     cv::imwrite(pathname, img_to_save);
//     LOGW("debug image saved to app storage root.");
//     pthread_exit(0);
// }
// /*Save debug img to app storage root*/
// void saveDebugImgToPath(cv::Mat img, std::string name) {
//     img_to_save = img.clone();
//     img_name = name;
//     pthread_create(&img_debug_thr, nullptr, saveImgToPathRunner, nullptr);
//     pthread_detach(img_debug_thr);
// }