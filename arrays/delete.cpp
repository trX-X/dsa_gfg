#include<iostream>
using namespace std;

int deleteEle(int arr[], int n, int x){
    int i;
    for(i=0; i<n; i++)
        if(arr[i] == x)
            break;

    if(i==n)
        return n;

    for(int j=i; j<n-1; j++)
        arr[j] = arr[j+1];

    return (n-1);    
}

int main(){
    int arr[] = {3, 8, 12, 5, 6};
    cout<<deleteEle(arr, 5, 12);
    return 0;
}