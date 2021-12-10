#include<iostream>
using namespace std;

//Iterative solution
// int trailingZeros(int n){
//     int res = 1;
//     int count = 0;
//     for(int i=2; i<=n; i++){
//         res = res * i;
//     }
//     while(res%10 == 0){
//         ++count;
//         res = res/10;
//     }

//     return count;
// }

//More Efficient solution
int trailingZeros(int n){
    int res = 0;
    for(int i = 5; i <= n; i = i*5){
        res = res + (n/i);
    }
    return res;
}

int main(void){
    cout<< trailingZeros(10)<<endl;
    return 0;
}