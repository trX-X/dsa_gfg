#include<iostream>
using namespace std;

 int maxConsecutiveOnes(int N)
{
    int count = 0;
    while(N){
        N = N & (N<<1);
        count++;
    }
    return count;
}

int main(void){
    cout<<maxConsecutiveOnes(222);
    return 0;
}