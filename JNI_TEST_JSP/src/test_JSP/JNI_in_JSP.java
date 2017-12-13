package test_JSP;

public class JNI_in_JSP {
	public native String request(String call);
	
	static {
		System.load("C:\\Users\\yeop\\Desktop\\eclipse"
				+ "\\Jerome0731\\JNI_C_JSP\\Debug\\JNI_C_JSP.dll");
	}
}
