#include<iostream>
using namespace std;

//Naive solution O(underroot x)
// int sqrtFloor(int x){
//     int i=1;
//     while(i*i <= x)
//         i++;

//     return (i-1);    
// }

//Efficient solution O(logx)
int sqrtFloor(int x){
    int low=1, high=x, ans=1;
    while(low <= high){
        int mid = (low+high)/2;
        int msq = mid*mid;
        if(msq == x)
            return mid;
        else if(msq > x)
            high = mid-1;
        else{
            low = mid+1;
            ans = mid;          
        }               
    }
    return ans;
}

int main(void){
    cout<<sqrtFloor(15);
    return 0;
}