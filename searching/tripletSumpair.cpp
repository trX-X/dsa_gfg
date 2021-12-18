#include<iostream>
using namespace std;

bool isPair(int arr[], int left, int right,int sum){
    while(left<right){
        if((arr[left] + arr[right]) == sum)
                return true; 
        else if((arr[left]+arr[right]) < sum)
                left++;
        else
            right--;
    }
    return false;
}

bool isTriplet(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        if(isPair(arr, i+1, n-1, sum-arr[i]))
            return true;
    }
    return false;
        
}

int main(void){
    int arr[] = {2, 3, 4, 8, 9, 20, 40};
    cout<<isTriplet(arr, 7, 32);
    return 0;
}