#include<bits/stdc++.h>
using namespace std;

int main(void){
    //Signed not
    int x = 1;
    cout<<(~x)<<endl;   //-2
    x = 5;
    cout<<(~x)<<endl;   //-6
    //Unsigned not
    unsigned int n = 1;
    cout<<(~n)<<endl;   //4294967294
    n = 5;
    cout<<(~n)<<endl;   //4294967290
    return 0;
}