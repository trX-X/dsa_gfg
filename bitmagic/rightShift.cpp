#include<bits/stdc++.h>
using namespace std;

int main(void){
    int x = 33;
    int y=4;
    cout<< (x >> 1) <<endl; //16
    cout<< (x >> 2) <<endl; //8
    cout<< (x >> y) <<endl; //2
    cout<< floor(x/pow(2,y)) <<endl;    //2
    return 0;
}