package com.jni.spring;

public class JNI_in_Spring {
	public native String request(String call);
	
	static {
		System.load("C:\\Users\\yeop\\Documents"
				+ "\\workspace-sts-3.9.1.RELEASE"
				+ "\\JNI_C_SPRING\\Debug\\JNI_C_SPRING.dll");
	}
}
