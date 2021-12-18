#include<iostream>
using namespace std;

bool isPair(int arr[], int n, int sum){
    int left=0, right=n-1;
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
    
}

int main(void){
    int arr[] = {2, 4, 8, 9, 11,12, 20, 30};
    cout<<isPair(arr, 8, 23);
    return 0;
}