#include<iostream>
using namespace std;

//Naive solution O(n^2)
// int maxSumArray(int arr[], int n){
//     int res=0;
//     for(int i=0; i<n; i++){
//         int curr=0;
//         for(int j=i; j<n; j++){
//             curr = curr + arr[j];
//             res = max(res, curr); 
//         }
//     }
//     return res;
// }

//Efficient solution
int maxSumArray(int arr[], int n){
    int res = arr[0];
    int maxEnding= arr[0];
    for(int i=1; i<n; i++){
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int main(void){
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    cout<<maxSumArray(arr, 7);
    return 0;
}