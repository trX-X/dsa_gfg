#include<bits/stdc++.h>
using namespace std;

int digitsFact(int n){
    if(n<0) return 0;
    if(n<=1) return 1;
    double count = 0;
    for(int i=2; i<=n; i++)
        count = count + log10(i);

    return count;
}

int findDigits(int n){
    if(n<0) return 0;
    if(n<=1) return 1;
    double x = ((n * log10(n/M_E) + log10(2 * M_PI * n) / 2.0));
    return floor(x) + 1;
}

int main(void){
    cout<<digitsFact(1000000)<<endl;
    cout<<findDigits(1000000);
    return 0;
}