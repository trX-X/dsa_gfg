#include<iostream>
using namespace std;

//Given an unsorted array of non-negative integers. Find if there is a subarray with given sum

bool slidWinVar(int arr[], int n, int sum){
    int curr_sum = arr[0], s=0;
    for(int e=1; e<n; e++){
        while( (sum < curr_sum) && (s < e-1)){
            curr_sum -= arr[s];
            s++;
        }
        if(curr_sum == sum)
            return true;
        if(e<n)
            curr_sum += arr[e];        
    }
    return (curr_sum == sum);
}  

int main(void){
    int arr[] = {1, 4, 20, 3, 10, 5};
    cout<<slidWinVar(arr, 6, 33);
    return 0;
}