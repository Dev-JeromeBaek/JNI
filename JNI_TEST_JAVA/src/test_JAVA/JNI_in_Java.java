package test_JAVA;

public class JNI_in_Java {
	public native String request(String call);
	
	static {
		System.load("C:\\Users\\yeop\\Desktop\\eclipse"
				+ "\\Jerome0731\\JNI_TEST_C\\Debug\\JNI_TEST_C.dll");
	}
}
 