#include<iostream>
using namespace std;

// Given an array arr[] of n positive integers. The task is to find the maximum for every adjacent pairs in the array.

// Input:
// n = 6
// arr[] = {1,2,2,3,4,5}
// Output: 2 2 3 4 5
// Explanation: Maximum of arr[0] and arr[1]
// is 2, that of arr[1] and arr[2] is 2, ...
// and so on. For last two elements, maximum 
// is 5.

// Input:
// n = 2
// arr[] = {5, 5}
// Output: 5
// Explanation: We only have two elements 
// so max of 5 and 5 is 5 only.

void maximumAdjacent(int sizeOfArray, int arr[]){
    for(int i=1; i<sizeOfArray; i++){
        if(arr[i] > arr[i-1])
            cout<<arr[i]<<" ";
        else
            cout<<arr[i-1]<<" ";    
    }
}

int main(void){
    int arr[] = {1, 2, 2, 3, 4, 5};
    maximumAdjacent(6, arr);
    return 0;
}