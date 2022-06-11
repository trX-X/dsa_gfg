package com.basicproblems;

public class FindFactorial {

	public static void main(String[] args) {
		
		System.out.println(findFact(4));
		
	}
	
	static int findFact(int n) {
		if(n==0 || n==1) return 1;
		
		return n * findFact(n-1);
	}
}
