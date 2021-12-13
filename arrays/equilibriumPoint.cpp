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
// bool equilibriumPoint(int arr[], int n){
//     int sum=0;
//     for(int i=0; i<n; i++)
//         sum += arr[i];
//     int l_sum=0;
//     for(int i=0; i<n; i++){
//         if(l_sum == sum - arr[i])
//             return true;
//         l_sum += arr[i];
//         sum -= arr[i];    
//     }    
//     return false;
// }

int equilibriumPoint(long long a[], int n) {
    int sum=0;
    for(int i=0; i<n; i++)
        sum += a[i];
    int l_sum = 0;
    for(int i=0; i<n; i++){
        if(l_sum == sum - (l_sum+a[i])){
            return i+1;
        }
        l_sum += a[i];
    }   
    return -1;  
}

int main(void){
    long long arr[] = {1,3,5,2,2};
    cout<< equilibriumPoint(arr, 5);
    return 0;
}