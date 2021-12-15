#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
        if(a>b)
            return a;
        return b;    
    }

    
long long maxSubarraySum(int arr[], int n){
        long long res = arr[0];
        long long maxE = arr[0];
        
        for(int i=1; i<n; i++){
            maxE = max(arr[i], maxE + arr[i]);
            res = max(res, maxE);
        }
        return res;
        
}

int main(void){
    int arr[] = {1,2,3,-2,5};
    cout<<maxSubarraySum(arr, 5);
    return 0;
}