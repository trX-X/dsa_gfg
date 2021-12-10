#include<iostream>
#include<math.h>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
{
    if(m == n) return -1;
    int XOR = m ^ n;
    return log2(XOR & ~(XOR-1)) + 1;

}


int main(void){
    cout<<posOfRightMostDiffBit(52, 4);
    return 0;
}