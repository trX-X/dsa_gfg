#include<iostream>
using namespace std;

//Naive Approch O(n^2)
// bool isSorted(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[i])
//                 return false;
//         }
//     }
//     return true;
// }

//Efficient approach
bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main(){
    int arr[] = {40, 8, 50, 100};
    cout<<isSorted(arr, 4);
    return 0;
}