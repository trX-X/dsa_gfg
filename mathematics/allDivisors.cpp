#include<iostream>
using namespace std;

//Naive Approach
// void allDivisors(int n){
//     for(int i=1; i<=n; i++){
//         if(n%i==0) cout<<i<<" ";
//     }
// }

//Efficient approach
// void allDivisors(int n){
//     for(int i=1; i*i<=n; i++){
//         if(n%i == 0){
//             cout<<i<<" ";
//             if(i != n/i)
//                 cout<<n/i<<" ";
//         }
//     }
// }

//Efficient approach sorted order
void allDivisors(int n){
    int i = 1;
    for(i=1; i*i<n; i++){
        if(n%i == 0) cout<<i<<" ";
    }
    for( ; i>=1; i--){
        if(n%i == 0) cout<<(n/i)<<" ";
    }
}


int main(void){
    allDivisors(30);
    return 0;
}