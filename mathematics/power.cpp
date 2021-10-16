#include<iostream>
using namespace std;

// int power(int x, int n){
//     int res = 1;
//     for(int i = 0; i<n; i++){ //x=2,n=3  res=2 / i=1, res=2x2 / i=2 res = 4x2
//         res = res*x;
//     }
//     return res;
// }

//Efficient solution
// int power(int x, int n){
//     if(n==0) return 1;
//     int temp = power(x, n/2);
//     temp = temp * temp;
//     if(n%2 == 0) return temp;
//     else return temp*x;
// }

//Iterative Solution
int power(int x, int n){
    int res=1;
    while(n>0)
    {
        if(n%2 != 0)
        {
            res = res*x;
        }
        x = x * x;
        n = n/2;
    }
    return res;
}

int main(void){
    cout<<power(3,4)<<endl;
    return 0;
}