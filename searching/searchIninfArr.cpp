#include<iostream>
using namespace std;

int binarySearch(int arr[], int num, int low, int high){
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == num)
            return mid;
        if(arr[mid] > num)
            high = mid-1;
        else
            low=mid+1;    
    }
    return -1;
}

int search(int arr[], int num){
        if(arr[0] == num)   return 0;
        int i=1;
        while(arr[i] < num)
            i = i*2;
        if(arr[i] == num) return i;
        return binarySearch(arr, num, i/2, i-1);    
}

int main(void){
    int arr[] = {1, 10, 20, 30, 45, 55, 60, 80, 100, 120, 150, 190, 200};
    cout<<search(arr, 100);
    return 0;
}