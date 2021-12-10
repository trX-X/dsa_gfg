#include<iostream>
using namespace std;

//Naive solution
// int maxConsecutive1s(int arr[], int n){
//     int res = 0;
//     for(int i=0; i<n; i++){
//         int curr=0;
//         for(int j=i; j<n; j++){
//             if(arr[j] == 1) curr++;
//             else break;
//         }
//         res = max(res, curr);
//     }
//     return res;
// }

//Efficient solution
int maxConsecutive1s(int arr[], int n){
    int res = 0, curr = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) curr=0;
        else{
            curr++;
            res = max(res, curr);
        }
    } 
    return res;
}

int main(void){
    int arr[] = {0, 1, 1, 1, 0, 1, 1};
    cout<<maxConsecutive1s(arr, 7);
    return 0;
}