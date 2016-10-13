//
// Created by Administrator on 2016/9/20.
//

#include "com_shan_ndkdemo_ndk_NdkTest.h"

JNIEXPORT jstring JNICALL Java_com_shan_ndkdemo_ndk_NdkTest_hello(JNIEnv *env, jclass jcs)
{
    return env->NewStringUTF("这里是来自c++的:hello world!");
}