#include<iostream>
using namespace std;

//Naive soln O(n^2)
// int maxLength(int arr[], int n){
//     int res = 1;
//     for(int i=0; i<n; i++){
//         int curr=1;
//         for(int j=i+1; j<n; j++){
//             if((arr[j]%2 == 0 && arr[j-1]%2 != 0) || (arr[j]%2 != 0 && arr[j-1]%2 == 0))    curr++;
//             else break;
//         }
//         res = max(curr, res);
//     }
//     return res;
// }

//Efficient soln O(n)
int maxLength(int arr[], int n){
    int curr=1;
    int res=1;
    for(int i=1; i<n; i++){
        if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0)){
            curr++;
            res = max(res, curr);
        }else curr=1;
    }
    return res;

}

int main(void){
    int arr[] = {5, 10, 20, 6, 3, 8};
    cout<<maxLength(arr, 6);
    return 0;
}