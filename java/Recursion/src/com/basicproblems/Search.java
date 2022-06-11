package com.basicproblems;

public class Search {

//	Given an unsorted array of N elements and an element X. The task is to write a recursive function to check 
//	whether the element X is present in the given array or not.
	
// arr[] is given array, l is lower bound, r is upper bound, x is element to be searched
	
	
	boolean recursiveSearch(int arr[], int l, int r, int x) {
		
//		If theres no element left to search
		if(r < l) return false;
		
		if(arr[l] == x) return true;
		
		if(arr[r] == x) return true;
		
		return recursiveSearch(arr, l+1, r-1, x);
		
	}
	
}
