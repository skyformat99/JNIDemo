package com.fedming.jnidemo;

/**
 * <pre>
 *     author : fdm
 *     time   : 2018/03/22
 *     desc   : JniUtils
 *     version: 1.0
 * </pre>
 */

public class JniUtils {

    public native String stringFromJNI();
    public static native String getSignature();
}
