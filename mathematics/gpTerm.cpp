#include<bits/stdc++.h>
using namespace std;

double gpTerm(double a, double b, int n){
    if(n == 1) return a;
    if(n == 2) return b;
    double cr = b/a;
    return floor(a * pow(cr, n-1));
}

int main(void){
    cout<<gpTerm(84,87,3);
    return 0;
}