#include<iostream>
#include<math.h>
using namespace std;

// Takes More time
// int countSetBitsToN(int n)
// {
//     int wCount=0;
//     for(int i=1; i<=n; i++){ 
//     int count = 0;
//     int temp = i;
//     while(temp>0){
//         temp = (temp & (temp-1));
//         count++;
//         }
//      wCount = wCount + count;   
//     }
//     return wCount;
// }


//This one even takes too much time
// int countSetBitsToN(int n)
// {
//     int table[n];
//     table[0] = 0;
//     for(int i=1; i<=n; i++)
//         table[i] = (i&1) + table[i/2];

//     int wCount = 0;
//     for(int i=1; i<=n; i++){
//         int temp = i;
//         int res = table[temp & 0xff];
//         temp = temp>>8;
//         res = res + table[temp & 0xff];
//         temp = temp>>8;
//         res = res + table[temp & 0xff];
//         temp = temp>>8;
//         res = res + table[temp & 0xff];
//         temp = temp>>8;
//         wCount = wCount+res;
//     }    
//     return wCount;
// }

//Even this is slow
// int countSetBitsToN(int n){
//     int table[n];
//     int sum=0;
//     table[0] = 0;
//     for(int i=1; i<=n; i++){
//         table[i] = (i&1) + table[i/2];
//         sum = sum + table[i];
//     }
//     return sum;
      
// }

int countSetBitsToN(int n){
      n++;
      int powerOf2 = 2;
      int cnt = n/2;
      while(powerOf2 <= n){
          int totalPairs = n/powerOf2;
          cnt += (totalPairs/2) * powerOf2;
          cnt += (totalPairs&1) ? (n % powerOf2) : 0;
          powerOf2 = powerOf2<<1; 
      }  
      return cnt;
}

int main(void){
    cout<<countSetBitsToN(14);
    return 0;
}