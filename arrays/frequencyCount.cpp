#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

// Given an array A[] of N positive integers which can contain integers from 1 to P 
// where elements can be repeated or can be absent from the array. Your task is to count the 
// frequency of all elements from 1 to N.

// Input:
// N = 5
// arr[] = {2, 3, 2, 3, 5}
// P = 5
// Output:
// 0 2 2 0 1
// Explanation: 
// Counting frequencies of each array element
// We have:
// 1 occurring 0 times.
// 2 occurring 2 times. 
// 3 occurring 2 times.
// 4 occurring 0 times.
// 5 occurring 1 time.

// Input:
// N = 4
// arr[] = {3,3,3,3}
// P = 3
// Output:
// 0 0 4 0
// Explanation: 
// Counting frequencies of each array element
// We have:
// 1 occurring 0 times.
// 2 occurring 0 times.
// 3 occurring 4 times.
// 4 occurring 0 times.


void frequencyCount(vector<int>& arr,int N, int P)
{ 
        // for (int j =0; j<N; j++)
        // arr[j] = arr[j]-1;

        // for (int i=0; i<N; i++)
        // arr[arr[i]%N] = arr[arr[i]%N] + N;
 
        // for (int i =0; i<N; i++)
        // arr[i]= arr[i]/N;

        for(int i=0;i<N;i++)
            arr[i] -= 1;
        for(int i=0;i<N;i++)
            if(arr[i]%P < N)
                arr[arr[i]%P] += P;
        for(int i=0;i<N;i++)
            arr[i] /= P;
}

int main(void){
    vector<int> arr = {2, 3, 2, 3, 5};
    frequencyCount(arr, 5, 5);
    for(auto it=arr.begin(); it != arr.end(); it++)
        cout<<*it<<" ";
    return 0;
}