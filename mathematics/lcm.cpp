#include<iostream>
using namespace std;

//Naive solution
// int lcm(int a, int b){
// int res = max(a,b);
// while(true){
//     if((res%a == 0) && (res%b == 0))
//         return res;
//     res++;
// }
// return res;
// }

//Efficient solution using formula => a*b = gcd(a,b) * lcm(a,b)
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return ((a*b)/ gcd(a,b));       //So, lcm from formula would be (a*b)/ gcd(a,b)
}

int main(void){
    cout<<lcm(10, 15)<<endl;
    return 0;
}