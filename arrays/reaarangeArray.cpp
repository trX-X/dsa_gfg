#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Rearrange an array with O(1) extra space

// Given an array arr[] of size N where every element is in the range from 0 to n-1.
//  Rearrange the given array so that arr[i] becomes arr[arr[i]].

// Input:
// N = 2
// arr[] = {1,0}
// Output: 0 1
// Explanation: 
// arr[arr[0]] = arr[1] = 0.
// arr[arr[1]] = arr[0] = 1.

// Input:
// N = 5
// arr[] = {4,0,2,1,3}
// Output: 3 4 2 0 1
// Explanation: 
// arr[arr[0]] = arr[4] = 3.
// arr[arr[1]] = arr[0] = 4.
// and so on.

void arrange(long long arr[], int n) {
    for(int i=0; i<n; i++){
        arr[i] += (arr[arr[i]] % n)*n;
    }
    for (int i = 0; i < n; i++)
      arr[i] /= n;
    for (int i = 0; i < n; i++)
      cout<<arr[i]<<" ";
}

int main(void){
    long long arr[] = {4,0,2,1,3};
    arrange(arr, 5);
    
    return 0;
}