#include<iostream>
using namespace std;

void oddAppearing(int arr[], int n){
    int res1=0,res2=0,XOR = 0;
    for(int i=0;i<n;i++){
        XOR = XOR ^ arr[i];
    }
    int sn = XOR & ~(XOR-1);
    for(int i=0; i<n; i++){
        if((sn & arr[i]) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];    
    }
    cout<<res1<<", "<<res2;

}

int main(void){
    int arr [] = {3,3,4,8,4,4,4,7,32,7};
    int n =10;
    oddAppearing(arr, 10);
    return 0;
}