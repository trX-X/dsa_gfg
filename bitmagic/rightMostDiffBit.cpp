#include<iostream>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
{
    int XOR = m ^ n;
    for(int k=1; k<=XOR; k++){
        if((XOR& (1 << (k-1))) != 0)
            return k;
    }
    return -1;
}


int main(void){
    cout<<posOfRightMostDiffBit(52, 4);
    return 0;
}