#include<bits/stdc++.h>
using namespace std;

int modInverse(int a, int m)
{
    for(int i=0; i<m;i++){
        if((a*i) % m == 1){
            return i;
        }
    }
    return -1;
}

int main(void){
    cout<<modInverse(10,17);
    return 0;
}