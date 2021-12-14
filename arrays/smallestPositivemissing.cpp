#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Smallest Positive missing number 
// You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 6
// Explanation: Smallest positive missing 
// number is 6.

// Input:
// N = 5
// arr[] = {0,-10,1,3,-20}
// Output: 2
// Explanation: Smallest positive missing 
// number is 2.


int missingNumber(int arr[], int n) 
{ 

    bool arrt[n];
    memset(arrt, 0, n);
    // arrt[n+1] = 0;
    for(int i=0; i<n; i++){
        if((arr[i] > 0) && (arr[i] <= n))
            arrt[arr[i]] = 1;
    }

    for(int i=1; i<=n; i++){
        if(!arrt[i])
            return i;
    }

    return n+1;

}   


int main(){
    int arr[] = {6, 7, 8, 9, 10};
    cout<<missingNumber(arr, 5);
    return 0;
}