#include<iostream>
#include<vector>
using namespace std;

// Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it
// In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....

// Input:
// n = 5
// arr[] = {1,2,3,4,5}
// Output: 2 1 4 3 5
// Explanation: Array elements after 
// sorting it in wave form are 
// 2 1 4 3 5.

// Input:
// n = 6
// arr[] = {2,4,7,8,9,10}
// Output: 4 2 8 7 10 9
// Explanation: Array elements after 
// sorting it in wave form are 
// 4 2 8 7 10 9.

//Practice question 11, in this the array is already sorted
void convertToWave(vector<int>& arr, int n){
        for(int i=1; i<n; i+=2){
            swap(arr[i], arr[i-1]);
        } 

}

int main(void){
    vector<int> arr = {1, 2, 3, 4, 5};
    convertToWave(arr, 5);
    for(auto it=arr.begin(); it != arr.end(); it++)
        cout<<*it<<" ";
    return 0;
}