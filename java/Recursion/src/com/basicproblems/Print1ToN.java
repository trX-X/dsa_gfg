package com.basicproblems;

public class Print1ToN {

	public static void main(String[] args) {
		print1ToNTailRec(5, 1);
	}
	
	static void print1ToN(int n) {
		
		if(n == 0)
			return;
		
		print1ToN(n-1);
		System.out.println(n);
		
	}
	
	static void print1ToNTailRec(int n, int k) {
			
			if(n == 0)
				return;
			
			System.out.println(k);
			print1ToNTailRec(n-1, k+1);
			
		}
	
	static void printNTo1(int n) {
			
			if(n == 0)
				return;
			
			
			System.out.println(n);
			printNTo1(n-1);
			
		}
	
}


