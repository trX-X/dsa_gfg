#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected
//  to the constraint of A[i] < A[j] and i < j.

// Input:
// N = 2
// A[] = {1, 10}
// Output:
// 1
// Explanation:
// A[0]<A[1] so (j-i) is 1-0 = 1.

// Input:
// N = 9
// A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
// Output:
// 6
// Explanation:
// In the given array A[1] < A[7]
// satisfying the required 
// condition(A[i] < A[j]) thus giving 
// the maximum difference of j - i 
// which is 6(7-1).

int maxIndexDiff(int A[], int N) 
{ 

    int m=0;
       int i=0;
       int j=N-1;
       while(i<=j){
           if(A[i]<=A[j]){
               m=max(m,j-i);
               i++;
               j=N-1;
           }
           else
               j--;
       }
       return m;

}


int main(void){
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout<<maxIndexDiff(arr, 9);
    
    return 0;
}