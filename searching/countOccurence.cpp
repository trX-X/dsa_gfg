#include<iostream>
using namespace std;


int firstOcc(int arr[], int n, int num){
    int low=0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;

        if(num < arr[mid])
            high = mid-1;
        else if(num > arr[mid])
            low = mid+1;

        else{
            if( (mid == 0) || (arr[mid] != arr[mid-1]))
                return mid;
            else
                high = mid-1;    
        }        
    }
    return -1;
}

int lastOcc(int arr[],int n,int num){
    int low =0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] > num)
            high = mid-1;
        else if(arr[mid] < num)
            low = mid+1;

        else{
            if((mid == n-1) || (arr[mid] != arr[mid+1]))
                return mid;
            else
                low = mid+1;    
        }        

    }
        return -1;

}

int countOccurences(int arr[], int n, int num){
    int first = firstOcc(arr, n, num);
    if(first == -1)
        return 0;

    return (lastOcc(arr, n, num) - first + 1);    
}


int main(void){
    int arr[] = {10, 20, 20, 20, 20, 40, 40};
    cout<<countOccurences(arr, 7, 20);
    return 0;
}