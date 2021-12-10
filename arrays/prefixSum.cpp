#include<iostream>
using namespace std;

//Prefix Sum 
//Array to store sums of array at every index
int prefix_sum[10000];

void preSum(int arr[], int n){
    prefix_sum[0] = arr[0];
    for(int i=1; i<n; i++)
        prefix_sum[i] = prefix_sum[i-1] + arr[i]; 
}

int getSum(int prefix_sum[], int l, int r){
    if(l != 0)
        return prefix_sum[r] - prefix_sum[l-1];
    else
        return prefix_sum[r];    
}

int main(void){
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    preSum(arr, 7);
    cout<<getSum(prefix_sum, 1, 3)<<endl;
    cout<<getSum(prefix_sum, 0, 2)<<endl;
    return 0;
}