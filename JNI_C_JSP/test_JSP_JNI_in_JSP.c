/*
 * test_JSP_JNI_in_JSP.c
 *
 *  Created on: 2017. 12. 13.
 *      Author: yeop
 */
#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL Java_test_1JSP_JNI_1in_1JSP_request
  (JNIEnv * env, jobject class_object, jstring jstr) {
	const char *cstr = (*env)->GetStringUTFChars(env, jstr, NULL);
	char return_messge[100] = "Hi, This is ";
	strcat(return_messge, cstr);
	(*env)->ReleaseStringUTFChars(env, jstr, cstr);
	jstring result = (*env)->NewStringUTF(env, return_messge);

	return result;
}
