package com.shan.ndkdemo.ndk;

/**
 * Created by Administrator on 2016/9/20.
 */

public class NdkTest {
    static {
        System.loadLibrary("jnitest");
    }
    public native static String hello();
}
