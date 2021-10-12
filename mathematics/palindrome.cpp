#include<iostream>
using namespace std;
//time complexity in O(n)
bool isPalindrome(int n){
    int temp = n;
    int rev = 0;
    while(temp != 0){
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
   return (rev == n);
}


int main(void){
    cout<<isPalindrome(121)<<endl;
    return 0;
}