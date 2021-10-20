#include<bits/stdc++.h>
using namespace std;

 long long sumUnderModulo(long long a,long long b)
{
       long long power = pow(10,9); 
       unsigned long long  sum = a+b;
       return ((sum) % (power + 7));   
}

 int multiplicationUnderModulo(long long a,long long b)
{
       long long power = pow(10,9)+7; 
       long long int mula = a%power;
       long long int mulb = b%power;
       return ((mula * mulb) % (power)); 
}

int main(void){
    // cout<<sumUnderModulo(9223372036854775807, 9223372036854775807);
    cout<<multiplicationUnderModulo(92233720368547758, 92233720368547758);
    return 0;
}