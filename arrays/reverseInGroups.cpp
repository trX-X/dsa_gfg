#include<iostream>
#include<vector>
using namespace std;

// Reverse array in groups
// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

// Input:
// N = 8, K = 3
// arr[] = {1,2,3,4,5, 6, 7, 8}
// Output: 3 2 1 6 5 4 8 7
// Explanation: First group consists of elements
// 1, 2, 3. Second group consists of 4,5,6.

// Input:
// N = 4, K = 3
// arr[] = {5,6,8,9}
// Output: 8 6 5 9

void reverseInGroups(vector<long long>& arr, int n, int k){
        for(int i=0; i<n; i += k){
            int left = i;
            int right = min(i+k-1, n-1);
            while(left < right){
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
}

int main(void){
    vector<long long> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k=3;
    reverseInGroups(arr, 8, 3);
    for(auto it = arr.begin(); it != arr.end(); ++it)
        cout<<*it<<" "; 
}