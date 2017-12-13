/*
 * test_JAVA_JNI_in_Java.c
 *
 *  Created on: 2017. 12. 13.
 *      Author: yeop
 */
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL Java_test_1JAVA_JNI_1in_1Java_request
  (JNIEnv * env, jobject class_object, jstring jstr) {
	const char *cstr = (*env)->GetStringUTFChars(env, jstr, NULL);
	char return_message[100] = "Hi, My name is ";
	strcat(return_message, cstr);
	(*env)->ReleaseStringUTFChars(env, jstr, cstr);
	jstring result = (*env)->NewStringUTF(env, return_message);

	return result;
}
