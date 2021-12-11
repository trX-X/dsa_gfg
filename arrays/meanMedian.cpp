#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int median(int A[],int N)
{
    sort(A,A+N); 
    //your code here
    if(N % 2 != 0){
        return A[N/2];
    }else{
        return ((A[N/2] + A[N/2 -1])/2);
    }
    return 0;
    
    //If median is in fraction then convert it to integer and return
}

int mean(int A[],int N)
{
    int sum=0;
    for(int i=0; i<N; i++)
        sum += A[i];
    return sum/N;     
}


int main(void){
    int arr[] = {2, 3, 4, 8};
    cout<<mean(arr, 4)<<endl;
    cout<<median(arr, 4);
    return 0;
}