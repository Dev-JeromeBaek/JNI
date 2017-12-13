<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="test_JSP.JNI_in_JSP" %>
<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Connect JNI in JSP</title>
</head>
<body>
	<%
		JNI_in_JSP jni_jsp = new JNI_in_JSP();
		String res = jni_jsp.request("JSP");
	%>
	<%= res %>
</body>
</html>