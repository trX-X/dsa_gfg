#include<iostream>
using namespace std;

unsigned int swapBits(unsigned int n)
{
    unsigned int even = n & 0xAAAAAAAA;
    unsigned int odd = n & 0x55555555;
    even = even >> 1;
    odd = odd << 1;
    return (even | odd);
}

int main(void){
    cout<<swapBits(23);
    return 0;
}