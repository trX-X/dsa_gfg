#include<iostream>
using namespace std;

//Naive solution
// bool equilibriumPoint(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int l_sum = 0, r_sum = 0;
//         for(int j=0; j<i; j++)
//             l_sum += arr[j];
//         for(int j=i+1; j<n; j++)
//             r_sum += arr[j];
//         if(l_sum == r_sum)
//             return true;    
//     }
//     return false;
// }

//Efficient solution
bool equilibriumPoint(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    int l_sum=0;
    for(int i=0; i<n; i++){
        if(l_sum == sum - arr[i])
            return true;
        l_sum += arr[i];
        sum -= arr[i];    
    }    
    return false;
}

int main(void){
    int arr[] = {3, 4, 8, -9, 20, 6};
    cout<< equilibriumPoint(arr, 6);
    return 0;
}