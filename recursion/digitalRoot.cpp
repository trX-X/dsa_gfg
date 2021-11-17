#include<iostream>
using namespace std;

int digitalRoot(int n)
{
    if(n<10)
        return n;    
    return digitalRoot(n/10 + n%10);    
    
}

int main(void){
    cout<<digitalRoot(99999);
    return 0;
}