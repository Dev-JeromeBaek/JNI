package com.jni.spring;

import java.util.Locale;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;

import com.jni.spring.JNI_in_Spring;

/**
 * Handles requests for the application home page.
 */
@Controller
public class HomeController {
	
	@RequestMapping(value = "/", method = RequestMethod.GET)
	public String home(Locale locale, Model model) {
		
		JNI_in_Spring jni_spring = new JNI_in_Spring();
		String res_jni = jni_spring.request("Spring");
		
		model.addAttribute("res_jni", res_jni);
		
		return "home";
	}
	
}
