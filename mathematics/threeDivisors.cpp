#include<bits/stdc++.h>
using namespace std;

// int exactly3Divisors(int N)
// {
//     int count = 0;
    
//     for(int x=2; x<=N; x++){
//     int divCount = 0;
//     for(int i=2; i*i<=x; i++){
        
//         if(N%i == 0){
//             divCount++;
//             if(i != N/i)
//                 divCount++;
//         }
//         if(divCount==3)
//             count++;
//     }
//     }
//     return count;
// }

     int exactly3Divisors(int N)
    {
        int count=0,flag=0;
        for(int i=2;i*i<=N;i++){
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
            }
            flag=0;
        }
        return count;
    }

int main(void){
  
     cout<<exactly3Divisors(9);
    
    return 0;
}