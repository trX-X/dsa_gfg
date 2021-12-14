#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//Naive solution O(n^2)
// void leaders(int arr[], int n){
//     for(int i=0; i<n; i++){
//         bool flag = false;
//         for(int j=i+1; j<n; j++){
//             if(arr[i] <= arr[j]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false)
//             cout<<arr[i]<<" ";
//     }
// }


//Efficient O(n) soln but prints elements in reverse order
// void leaders(int arr[], int n){
//     int curr_ldr = arr[n-1];
//     cout<<curr_ldr<<" ";
//     for(int i=n-2; i>=0; i--){
//         if(curr_ldr < arr[i]){
//             curr_ldr = arr[i];
//             cout<<curr_ldr<<" ";
//         }
//     }
// }

//O(n)space and O(1) time complexity
vector<int> leaders(int a[], int n){
    int curr_ldr = a[n-1];
    vector<int> res;
    res.push_back(curr_ldr);
    for(int i=n-2; i>=0; i--){
        if(curr_ldr <= a[i]){
            curr_ldr = a[i];
            res.push_back(curr_ldr);
        }
    }
    reverse(res.begin(), res.end());
    return res;
        
}

int main(){
    int arr[] = {16,17,4,3,5,2};
    vector<int> r;
    r = leaders(arr, 6);
    for(auto it=r.begin(); it!= r.end(); it++)
        cout<<*it<<" ";
    return 0;
}