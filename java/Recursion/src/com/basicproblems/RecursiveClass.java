package com.basicproblems;

public class RecursiveClass {

	public static void main(String[] args) {
		
//		Search s = new Search();
//		int arr[]= {7, 23, 65, 22, 3};
//		System.out.println(s.recursiveSearch(arr, 0, 4, 5));
		
		Palindrome p = new Palindrome();
//		malayalam
		char s[] = {'m','a','l','a','y','a','l','a','m'};
		System.out.println(p.isPalindrome(s, 0, 8));
		
	}
	
}


