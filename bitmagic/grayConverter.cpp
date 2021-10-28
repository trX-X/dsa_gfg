#include<iostream>
using namespace std;

int greyConverter(int n)
{
        return (n ^ (n>>1));
}

int grayToBinary(int n)
{
    int res = n;
    while(n>0){
        n = n >> 1;
        res = res ^ n;
    }
    return res;
}

int main(void){
    cout<<greyConverter(7)<<endl;
    cout<<grayToBinary(15);
    return 0;
}