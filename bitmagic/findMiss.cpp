#include<iostream>
using namespace std;

int main(void){
    // int arr[3] = {1,4,3};
    // int n=3;
    int arr[4] = {1,5,3,2};
    int n=4;

    int res = 0, nres=1, ares=0;
    for(int i=1; i<=n; i++){
         nres = nres ^ i+1;
    }
   
    for(int i=0; i<n; i++){   
        ares = ares ^ arr[i]; 
    }
    res = nres ^ ares;
    cout<<res<<endl;
    return 0;
}