#include<bits/stdc++.h>
using namespace std;

//There are two solutions, 1. Using Right Shift, 2. Using left shift

//Right shift
void kthBitRShift(int n, int k){
    if(((n>>(k-1))&1) == 1)
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
}

//Left shift
void kthBitLShift(int n, int k){
    if(((n) & (1 << (k))) != 0)
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
}

int main(void){
    kthBitRShift(4,2);
    kthBitLShift(4,2);

    return 0;
}