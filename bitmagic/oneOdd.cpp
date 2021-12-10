#include<iostream>
using namespace std;

//Efficient solution
int findOdd(int arr1[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        res = res ^ arr1[i];
    }
    return res;
}

int main(void){
    int arr[] = {8,7,7,8,8};
    cout<<findOdd(arr, 5);
    //Naive approach
    // for(int i=0; i< 5; i++){
    //     int count = 0;
    //     for(int j=0; j< 5; j++){
    //         if(arr[j] == arr[i])
    //             count++;  
    //     }
    //      if(count%2 != 0)
    //         cout<<arr[i];  
    // }
    return 0;
}

