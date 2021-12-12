#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minAdjDiff(int arr[], int n){ 
    int diff = 0, min_diff=abs(arr[1] - arr[0]);
    for(int i=2; i<n; i++){
        diff = abs(arr[i-1] - arr[i]);
        min_diff = min(diff, min_diff);
    }
    min_diff = min(min_diff, abs(arr[n-1]-arr[0]));
    return min_diff;

}

int main(void){
    int arr[] = {8, -8, 9, -9, 10, -11, 12};
    cout<<minAdjDiff(arr, 7);
    return 0;
}