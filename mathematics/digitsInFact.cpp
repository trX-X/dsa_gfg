#include<iostream>
#include<math.h>
using namespace std;


int digitsInFactorial(int N)
    {
        // code here
        unsigned long long fact =1;
        for(int i=2; i<=N; i++){
            fact = fact*i;
        }
        cout<<fact<<endl;
        int count = 0;
        while(fact != 0){
            ++count;
            fact = fact/10;
            
        }
        return count;
    }


int main(void){
    cout<<digitsInFactorial(42);
    return 0;
}