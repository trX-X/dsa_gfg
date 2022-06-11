package com.basicproblems;

//Given a string, the task is to write a recursive function to check if the given string is palindrome or not.

//Solution: The idea to write the recursive function is simple and similar to the Search problem:
//If there is only one character in the string, return true.
//Else compare first and last characters and recur for remaining substring.

//Here arr is the String we need to check, s is the starting, e is the ending

public class Palindrome {

	boolean isPalindrome(char arr[], int s, int e) {
		
//		If theres only one word
		if(s==e) return true;
		
//		If the first and last don't match
		if(arr[s] != arr[e]) return false;
		
//		All the check has been done and the starting s reached after ending e
		if(s < e) return isPalindrome(arr, s+1, e-1);
		
		return true;
	}
	
}
