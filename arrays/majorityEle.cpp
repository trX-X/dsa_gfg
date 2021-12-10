#include<iostream>
using namespace std;

//Naive solution O(n^2)
// int majEle(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int count = 1;
//         for(int j=i+1; j<n; j++){
//             if(arr[i] == arr[j])
//                 count++;
//         }
//         if(count > n/2)
//             return i;
//     }
//     return -1;
// }

//Efficient soln O(n)
int majEle(int arr[], int n){
    int res=0, count =1;
    for(int i=1; i<n; i++){
        if(arr[res] == arr[i])  
            count++;
        else count--;

        if(count == 0){
            res = i;
            count = 1;
        }    
    }

    count = 0;
    for(int i=0; i<n; i++){
        if(arr[res] == arr[i])
            count++;    
    }
    if(count <= n/2)
        return -1;

    return res;    
}

int main(void){
    int arr[] = {6, 8, 4, 8, 8};
    cout<<majEle(arr, 5);
    return 0;
}