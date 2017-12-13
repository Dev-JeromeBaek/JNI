/*
 * com_jni_spring_JNI_in_Spring.c
 *
 *  Created on: 2017. 12. 13.
 *      Author: yeop
 */
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL Java_com_jni_spring_JNI_1in_1Spring_request
  (JNIEnv * env, jobject class_object, jstring jstr) {
	const char *cstr = (*env)->GetStringUTFChars(env, jstr, NULL);
	char return_message[100] = "Hello, This is ";
	strcat(return_message, cstr);
	(*env)->ReleaseStringUTFChars(env, jstr, cstr);
	jstring result = (*env)->NewStringUTF(env, return_message);

	return result;
}
