#include<iostream>
using namespace std;

int countOnes(int arr[], int n){
    int low=0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == 0)
            low = mid+1;
        else{
            if((mid==0) || (arr[mid] != arr[mid-1]))
                return (n-mid);
        }    
    }
    return 0;
}

//count 1's in binary array but its reversed i.e it starts with 1 and ends with 0
int countOnesRev(int arr[], int n){
    if(arr[0] == 0)
        return 0;
    if(arr[n-1] == 1)
        return n;    
   int low=0, high=n-1;
   while(low<=high){
       int mid = (low+high)/2;
       if(arr[mid] ==1 && arr[mid+1]==0)
            return mid+1;
       if(arr[mid] ==1) 
            low=mid+1;
       else
        high = mid-1;         
   }
   return 0;
}


int main(void){
    int arr[] = {0, 0, 1, 1, 1, 1};
    // cout<<countOnes(arr, 6);
    int arr2[] = {1, 1, 1, 1, 0, 0};
    cout<< countOnesRev(arr2, 6);
    return 0;
}