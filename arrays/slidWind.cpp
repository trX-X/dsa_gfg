#include<iostream>
using namespace std;

//Naive solution O(n^2)
// int slidWin(int arr[], int n, int k){
//     int max_sum = INT8_MIN;
//     for(int i=0; i+k-1<n; i++){
//         int sum = 0;
//         for(int j=0; j<k; j++){
//             sum = sum + arr[i+j];
//         }
//         max_sum = max(sum, max_sum);
//     }
//     return max_sum;
// }

//Efficient solution
int slidWin(int arr[], int n, int k){
    int curr_sum = 0;
    for(int i=0; i<k; i++)
        curr_sum += arr[i];

    int max_sum = curr_sum;
    for(int i=k; i<n; i++){
        curr_sum += (arr[i]-arr[i-k]);
        max_sum = max(curr_sum, max_sum); 
    }    
    return max_sum;
}

int main(void){
    int arr[] = {5, -10, 6, 90, 3};
    cout<<slidWin(arr, 5, 2);
    return 0;
}