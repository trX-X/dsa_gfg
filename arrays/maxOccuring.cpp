#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int maxOcc(int l[], int r[], int n){
    int arr[1000];
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<n; i++){
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maxm=arr[0], res=0;
    for(int i=1; i<1000; i++){
        arr[i] += arr[i-1];
        if(maxm < arr[i]){
            maxm = arr[i];
            res = i;
        }
    }
    return res;
} 

//Max occurence Problem exercise, here we use an extra parameter called maxx
//maxx is the largest element from R[] array
int maxOccured(int L[], int R[], int n, int maxx){
    int arr[maxx+2];
    memset(arr, 0, sizeof(arr));
    for(int i=0; i<n; i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int res=0, maxm = arr[0];
    for(int i=1; i<maxx+2; i++){
        arr[i] += arr[i-1];
        if(maxm < arr[i]){
            maxm = arr[i];
            res=i;
        }
    }
    return res;

}


int main(void){
    int l[] = {2, 1, 2};
    int r[] = {5,3, 9};
    // cout<< maxOcc(l, r, 3);
    cout<< maxOccured(l, r, 3, 9);
    return 0;
}