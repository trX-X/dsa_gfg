#include<iostream>
using namespace std;

//Naive Solution
// int gcd(int a, int b){
//     int res = min(a,b);
//     while(res > 0){
//         if((a % res == 0) && (b % res == 0)){
//             break;
//         }
//         res--;
//     }
//     return res;
// }

//Euclidean solution
// int gcd(int a, int b){
//     while(a != b){
//         if(a > b){
//             a = a - b;
//         }else{
//             b = b - a;
//         }
//     }
//     return a;
// }

//optimized Euclidean solution
int gcd(int a, int b){
    if(b==0){
        return a;
    }else
    return gcd(b, a%b); 
}

int main(void){
    cout<< gcd(100, 150)<<endl;
    return 0;
}