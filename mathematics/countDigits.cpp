#include<iostream>
#include<math.h>
using namespace std;

//Iterative solution, takes O(n)
// int countDigits(int n){
//     int count = 0;
//     while(n > 0){
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }

//Recursive solution
// int countDigits(int n){
//     if(n==0) return 0;

//     return 1+ countDigits(n/10); 
// }

//Logarithmic solution
int countDigits(int n){
    return floor(log10(n) + 1);
}

int main(void){
    cout<<countDigits(1234)<<endl;
    return 0;
}
