#include<iostream>
using namespace std;

//*** Note its a normal search and not binary search, the below code is normal search
//******************
//Binary Search // O(n)
// int binarySearch(int arr[], int n, int num){
//     for(int i=0; i<n; i++){
//         if(arr[i] == num)
//             return i;    
//     }
//     return -1;
// }
///****************


//Binary Search // O(logn) 
int binarySearch(int arr[], int n, int num){
    int low=0, high =n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == num)
            return mid;
        else if(arr[mid] < num)
            low = mid+1;
        else
            high = mid -1;    
    }
    return -1;
}

//Binary search recursive solution
int bSearch(int arr[], int low, int high, int num){
    int mid = (high+low)/2;
    if(low>high)
        return -1;
    if(arr[mid] == num)
        return mid;
    else if(arr[mid] > num)
        return bSearch(arr, low, mid-1, num);
    else
        return bSearch(arr, mid+1, high, num);

}


int main(void){
    int arr[] = {10, 15, 20, 25, 30, 45, 50};
    // cout<<binarySearch(arr, 6, 45);
    cout<<bSearch(arr, 0,6, 45);

    return 0;
}