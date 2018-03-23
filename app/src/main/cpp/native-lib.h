/**
 * <pre>
 *     author : fdm
 *     time   : 2018/03/22
 *     desc   : native-lib.h
 *     version: 1.0
 * </pre>
 */

#include <jni.h>
#ifndef JNIDEMO_NATIVE_LIB_H
#define JNIDEMO_NATIVE_LIB_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_fedming_jnidemo_JniUtils_getSignature(JNIEnv *env);

#ifdef __cplusplus
}
#endif

#endif //JNIDEMO_NATIVE_LIB_H
