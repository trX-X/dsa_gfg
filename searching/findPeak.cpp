#include<iostream>
using namespace std;

int findPeak(int arr[], int n){
    int low=0, high=n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
            return mid;
        if((mid>0) && (arr[mid-1] >= arr[mid]))
            high = mid-1;
        else
            low = mid+1;        
    }
    return -1;
}

int main(void){
    int arr[] = {5, 20, 40, 30, 30, 50, 60};
    cout<<findPeak(arr, 7);
    return 0;
}