#include<iostream>
using namespace std;

void nto1(int n){
    if(n==0)
        return;
    cout<<n<<" ";
    nto1(n-1);    
}

void onetoN(int n){
    if(n==0)
        return;
    onetoN(n-1); 
    cout<<n<<" ";   
}
int main(void){
    nto1(5);
    cout<<"\n";
    onetoN(5);
    return 0;
}