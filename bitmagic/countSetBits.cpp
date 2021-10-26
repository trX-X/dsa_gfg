#include<bits/stdc++.h>
using namespace std;

//naive Approach
// int countSetBits(int n){
//     int count = 0;
//     while(n>0){
//         if(n & 1){
//             count++;
//             n = n>>1;
//         }else{
//             n = n>>1;
//         }
            
//     }
//     return count;
// }

//Brian and Kerningams Algorithm
// int countSetBits(int n){
//     int count = 0;
//     while(n>0){
//         n = (n & (n-1));
//         count++;
//     }
//     return count;
// }

//Lookup table method for 32 bit numbers

int countSetBits(int n){
    int table[256];
    table[0] = 0;
    for(int i=1; i<256; i++)
        table[i] = (i&1) + table[i/2];

    int res = table[n & 0xff];
    n = n>>8;
    res = res + table[n & 0xff];
    n=n>>8;
    res = res + table[n & 0xff];
    n=n>>8;
    res = res + table[n & 0xff];
    n=n>>8;
    return res;
}


int main(void){
    cout<<countSetBits(17);
    return 0;
}