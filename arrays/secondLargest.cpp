#include<iostream>
using namespace std;


// int largestEle(int arr[], int n){
//     int res = 0;
//     for(int i=1; i<n; i++){
//         if(arr[i] > arr[res])
//             res = i;
//     }
//     return res;
// }

// int secondLargest(int arr[], int n){
//     int largest = largestEle(arr, 4);
//     int res = -1;
//     for(int i=0; i<n; i++){
//         if(arr[i] != arr[largest]){
//             if(res == -1)
//                 res = i;
//             else if(arr[i] > arr[res])
//                 res = i; 
//         }
//     }
//     return res;
// }

//Efficient way
int secondLargest(int arr[], int n){
    int res = -1, largest = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i]>arr[res])
                res=i;
        }
    }
    return res;
}

int main(){
    int arr[] = {40, 8, 50, 100};
    cout<<secondLargest(arr, 4);
    return 0;
}