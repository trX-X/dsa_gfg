package com.basicproblems;

public class FactorialDemo {

	public static void main(String[] args) {
		
		System.out.println(factorialTailRec(5, 1));
	}
	
//	Factorial using recursion
	static int factorial(int n) {
		
		if(n == 0 || n == 1) return 1;
		
		return n * factorial(n-1);
	}
	
//	Factorial using tail recursion
	static int factorialTailRec (int n, int k) {
		
		if(n == 0 || n == 1) return k;
		
		return factorialTailRec(n-1, k*n);
	}
	
}
