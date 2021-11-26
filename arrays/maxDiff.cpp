#include<iostream>
using namespace std;

//Naive soln O(n^2)
// int maxDiff(int arr[], int n){
//     int res = arr[1] - arr[0];
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             res = max(res, arr[j] - arr[i]);
//         }
//     }
//     return res;
// }

//Efficient soln O(n)
int maxDiff(int arr[], int n){
    int res = arr[1] - arr[0], minVal = arr[0];
    for(int i=1; i<n-1; i++){
        res = max(res, arr[i]-minVal);
        minVal = min(minVal, arr[i]);
    }
    return res;
}

int main(void){
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout<<maxDiff(arr, 7);
    return 0;
}