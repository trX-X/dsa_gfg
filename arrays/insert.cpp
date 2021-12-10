#include<iostream>
using namespace std;

int insert(int arr[], int n, int x, int pos, int cap){

    if(n == cap)
        return n;

    int idx = pos-1;
    for(int i = n-1; i <= idx; i--)
        arr[i+1] = arr[i];

    arr[idx] = x;
    return (n+1);        
}


int main(void){
    int arr[] = {5,7,10,20};
    cout<<insert(arr, 4, 3, 2, 5);
    return 0;
}