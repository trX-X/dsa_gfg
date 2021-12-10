#include<iostream>
#include<math.h>
using namespace std;

 int countBitsFlip(int a, int b){
     int XOR = a ^ b;
     int count = 0;
     while(XOR>0){
         XOR = XOR & (XOR-1);
         count++;
     }
     return count;
}

int main(void){
    cout<<countBitsFlip(20, 25);
    return 0;
}