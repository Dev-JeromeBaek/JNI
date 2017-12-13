package test_JAVA;

public class JNI_MainCla {
	public static void main(String[] args) {
		JNI_in_Java jni_java = new JNI_in_Java();
		String response = jni_java.request("Jerome");
		System.out.println(response);
	}
}
