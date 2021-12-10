#include<bits/stdc++.h>
using namespace std;
//Using Brian and  kerningams soln
// bool powerOfTwo(int n){
//     int count = 0;
//     while(n>0){
//         n = (n & (n-1));
//         count++;
//     }
//     if(count == 1)
//         return true;
//     return false;   
// }

// //Efficient version of Using Brian and  kerningams soln
// bool powerOfTwo(int n){
//     if(n==0) return false;
//     return ((n&(n-1)) == 0);
// }

//One liner
bool powerOfTwo(int n){
    return (n!=0) && ((n&(n-1))==0);
}
int main(void){
    cout<<powerOfTwo(16);
    return 0;
}