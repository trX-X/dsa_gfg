#include<iostream>
using namespace std;

// Given a sorted array arr[] of size N without duplicates, and given a value x.
// Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x. 
// Find the index of K(0-based indexing).

// Input:
// N = 7, x = 0 
// arr[] = {1,2,8,10,11,12,19}
// Output: -1
// Explanation: No element less 
// than 0 is found. So output 
// is "-1".

// Input:
// N = 7, x = 5 
// arr[] = {1,2,8,10,11,12,19}
// Output: 1
// Explanation: Largest Number less than 5 is
// 2 (i.e K = 2), whose index is 1(0-based 
// indexing).

int findFloor(long long int arr[], int N, long long int K) {
    int low=0, high = N-1;
    while(low<=high){
        if (K >= arr[high]) 
            return high;
        int mid = (low+high)/2;
        if(arr[mid] == K)
            return mid;
        if(mid >0 && arr[mid-1] <= K && K<arr[mid])
            return mid-1;
        if(arr[mid] > K)
            high=mid-1;
        else
            low=mid+1;    
    }
    return -1;
}

int main(void){
    long long int arr[] = {1,2 ,8, 10, 11, 12, 19};
    cout<<findFloor(arr, 7, 5);
    return 0;
}