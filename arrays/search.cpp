#include<iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int main(void){
    int arr[] = {1,5,7,2,4};
    cout<<search(arr, 5, 7);
    return 0;
}
