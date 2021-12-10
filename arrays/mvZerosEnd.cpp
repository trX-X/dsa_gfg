#include<iostream>
using namespace std;

//Naive solution
// void mvZerosToEnd(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i] == 0){
//             for(int j=i+1; j<n; j++){
//                 if(arr[j] != 0){
//                     swap(arr[i], arr[j]);
//                 }
//             }
//         }
//     }
// }

//Efficient solution
void mvZerosToEnd(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
int main(){
    int arr[] = {8,5,0,10,0,20};
    mvZerosToEnd(arr, 6);
    return 0;
}