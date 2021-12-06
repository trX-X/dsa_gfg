#include<iostream>
using namespace std;

//Naive solution O(n^2)
// int maxCircularSum(int arr[], int n){
//     int res = arr[0];
//     for(int i=0; i<n; i++){
//         int curr_sum = arr[i];
//         int max_curr = arr[i];
//         for(int j=1; j<n; j++){
//             int index = (i+j)%n;
//             curr_sum += arr[index];
//             max_curr = max(curr_sum, max_curr);
//         }
//         res = max(res, max_curr);
//     }
//     return res;
// }

//Efficient solution O(n)
int normalCirSum(int arr[], int n){
    int res = arr[0], max_Ending = arr[0];
    for(int i=1; i<n; i++){
        max_Ending = max(arr[i], max_Ending + arr[i]);
        res = max(res, max_Ending); 
    }
    return res;
}

int maxCircularSum(int arr[], int n){
    int normal_max = normalCirSum(arr, n);
    if(normal_max < 0)
        return normal_max;
    int arr_sum = 0;
    for(int i=0; i<n; i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }    
    int max_circular = arr_sum + normalCirSum(arr, n);
    return max(max_circular, normal_max);
}

int main(void){
    int arr[] = {5, -2, 3, 4};
    cout<<maxCircularSum(arr, 4);
    return 0;
}