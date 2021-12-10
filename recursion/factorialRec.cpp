#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    return (n * factorial(n-1));    
}

//Using tail recursion
int factorialTail(int n,int k){
    if(n==0 || n==1)
        return k;
    return factorialTail(n-1, n*k);
}

int main(void){
    cout<<factorial(5)<<"\n";
    cout<<factorialTail(5,1);
    return 0;
}