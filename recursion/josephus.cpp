#include<iostream>
using namespace std;

int josephus(int n, int k){
    if(n==1)
        return 0;

    return (josephus(n-1, k)+k) %n;    
}

int main(void){
    cout<<josephus(5,3);
    return 0;
}