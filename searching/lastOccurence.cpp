#include<iostream>
using namespace std;


//Recursive implementation
// int lastOcc(int arr[],int low, int high, int num,int n){
//     if(low>high)
//         return -1;
//     int mid = (low+high)/2;

//     if(arr[mid] > num)
//         return lastOcc(arr, low, mid-1, num,n);
//     else if(arr[mid] < num)
//         return lastOcc(arr, mid+1, high, num, n);
//     else{
//         if((mid==n-1) || (arr[mid] != arr[mid+1]))
//             return mid;
//         else
//             return lastOcc(arr, mid+1,high, num, n);    
//     }            

// }

//iterative implementation
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


int main(void){
    int arr[] = {5, 10, 10 ,10, 10, 20, 20};
    // cout<<lastOcc(arr, 0, 6, 20,7);
    cout<<lastOcc(arr, 7, 10);
}