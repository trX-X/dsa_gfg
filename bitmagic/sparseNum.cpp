#include<iostream>
using namespace std;

bool isSparse(int n)
{
    if(n & (n>>1))
        return false;
    return true;    
}

int main(void){
    cout<<isSparse(41);
    return 0;
}