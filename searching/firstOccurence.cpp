#include<iostream>
using namespace std;

//Naive solution O(n)
// int findOcc(int arr[], int n, int num){
//     for(int i=0; i<n; i++)
//         if(arr[i] == num)
//             return i;

//     return -1;        
// }

//Recursive approach O(logn)

// int findOcc(int arr[], int low, int high, int num){
    
//     if(low > high)
//         return -1;
//     int mid = (low+high)/2;
//     if(arr[mid] > num)
//         return findOcc(arr, low, mid-1, num);

//     else if(arr[mid] < num)
//         return findOcc(arr, mid+1, high, num);   

//     else{
//         if((mid == 0) || (arr[mid] != arr[mid-1]))
//             return mid;
//         else 
//          return findOcc(arr, low, mid-1, num);      
//     }
         
// }

//Iterative apporach
int findOcc(int arr[], int n, int num){
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

int main(void){
    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    // cout<<findOcc(arr, 0, 6, 20);
    cout<<findOcc(arr, 7, 20);
    return 0;
}