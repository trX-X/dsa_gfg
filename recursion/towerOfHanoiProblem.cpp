#include<iostream>
#include<math.h>
using namespace std;

long long toh(int N, int from, int to, int aux) {
    if(N==1){
        cout<<"move disk 1 from rod "<<from<<" to"<<" rod "<<to<<endl;
        return 1;
    }
    toh(N-1, from, aux, to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to"<<" rod "<<to<<endl;
    toh(N-1, aux, to, from);
    return pow(2,N)-1;
}


int main(void){
    cout<<toh(2,1,3,2);
    return 0;
}



// Input:
// N = 2
// Output:
// move disk 1 from rod 1 to rod 2
// move disk 2 from rod 1 to rod 3
// move disk 1 from rod 2 to rod 3
// 3
// Explanation: For N=2 , steps will be
// as follows in the example and total
// 3 steps will be taken.