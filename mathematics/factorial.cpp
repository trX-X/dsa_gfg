#include<iostream>
using namespace std;

//Iterative solution
int factorial(int n){
    int res = 1;
    for(int i=2; i<=n; i++){
        res = res * i;
    }
    return res;
}

//Recursive solution
// int factorial(int n){
//     if(n==0) return 1;
//     return n * factorial(n-1);
// }


int main(void){
    cout<< factorial(5)<<endl;
    return 0;
}