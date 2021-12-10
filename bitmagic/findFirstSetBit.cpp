#include<iostream>
#include<math.h>
using namespace std;

// unsigned int getFirstSetBit(int n)
// {
//     for(int k=1; k<=n; k++){
//         if((n& (1 << (k-1))) != 0)
//             return k;
//     }
//     return 0;
// }

//O(log2(n)) approach
unsigned int getFirstSetBit(int n)
{
    return log2(n & ~(n-1)) + 1;
}

int main(void){
    cout<<getFirstSetBit(18);
    return 0;
}