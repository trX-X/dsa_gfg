#include<iostream>
using namespace std;

//Naive solution
// int getWater(int arr[], int n){
//     int res=0;
//     for(int i=1; i<n-1; i++){
//         int lMax = arr[i];
//         for(int j=0; j<i; j++)
//             lMax = max(lMax, arr[j]);
//         int rMax = arr[i];
//         for(int j=i+1; j<n; j++)
//             rMax = max(rMax, arr[j]);
//         res = res + min(lMax, rMax) - arr[i];        
//     }
//     return res;
// }

//Efficient solution
int getWater(int arr[], int n){
    int res=0;
    int lMax[n], rMax[n];
    lMax[0] = arr[0];
    for(int i=1; i<n-1; i++){
        lMax[i] = max(arr[i], lMax[i-1]);
    }
    rMax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--){
        rMax[i] = max(arr[i], rMax[i+1]);
    }

    for(int i=1; i<n-1; i++){
        res = res + min(lMax[i], rMax[i]) - arr[i];
    }
    return res;

}

int main(void){
    int arr[] = {7, 4, 0, 9};
    cout<<getWater(arr, 4);
    return 0;
}