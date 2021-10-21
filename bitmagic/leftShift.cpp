#include<bits/stdc++.h>
using namespace std;

int main(void){
    int x = 3;
    int y=4;
    cout<< (x << 1) <<endl; //6
    cout<< (x << 2) <<endl; //12
    cout<< (x << y) <<endl; //48
    cout<< (x * pow(2,y)) <<endl; //48

    return 0;
}