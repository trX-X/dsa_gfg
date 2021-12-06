#include<iostream>
using namespace std;

void maxConsecFlips(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout<<"From "<<i<<" to ";
            }
            else{
                cout<<(i-1)<<endl;
            }
        }
    }
    if(arr[n-1] != arr[0])
        cout<<(n-1)<<endl;
}

int main(void){
    int arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1};
    maxConsecFlips(arr, 11);
    return 0;
}