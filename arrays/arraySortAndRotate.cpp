#include<iostream>
using namespace std;

//  Check if array is sorted and rotated 

// Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated.
// A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.

// Input:
// N = 4
// arr[] = {3,4,1,2}
// Output: Yes
// Explanation: The array is sorted 
// (1, 2, 3, 4) and rotated twice 
// (3, 4, 1, 2). 

// Input:
// N = 3
// arr[] = {1,2,3}
// Output: No
// Explanation: The array is sorted 
// (1, 2, 3) is not rotated.

bool checkRotatedAndSorted(int arr[], int num){
        
        int x=0,y=0;
       for(int i=1;i<num;i++){
           if(arr[i]>arr[i-1])
               x++;
           else
               y++;
       }
       if(x==1 || y==1){
           if(arr[0]>arr[num-1])
               x++;
           else
               y++;
       }
       if(x==1 || y==1)
           return true;
       return false;
        
    }

int main(void){
    int arr[] = {3,4,5,1,2};
    cout<<checkRotatedAndSorted(arr, 5);
    return 0;
}    