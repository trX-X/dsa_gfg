#include<iostream>
using namespace std;

int sumOfNat(int n){
    if(n==0)
        return 0;
    return n + sumOfNat(n-1);       
}

int main(void){
    cout<<sumOfNat(3);
    return 0;
}