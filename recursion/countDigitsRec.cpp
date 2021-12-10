#include<iostream>
using namespace std;

int countDigits(int n){
    if(n/10 == 0)
        return 1;
    return 1 + countDigits(n/10);
    
}

int main(void){
    cout<<countDigits(99999); //5
    return 0;
}