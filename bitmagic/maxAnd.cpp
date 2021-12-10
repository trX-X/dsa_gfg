#include<iostream>
using namespace std;

int checkBit(int pattern, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if ((pattern & arr[i]) == pattern)
            count++;
    return count;
}
 
 //Takes less time
// Function for finding maximum and value pair
int maxAND (int arr[], int n)
{
    int res = 0, count;
 
    // iterate over total of 30bits from msb to lsb
    for (int bit = 31; bit >= 0; bit--)
    {
        // find the count of element having set  msb
        count = checkBit(res | (1 << bit),arr,n);
 
        // if count >= 2 set particular bit in result
        if ( count >= 2 )       
            res |= (1 << bit);       
    }
 
    return res;
}

//Takes More time
// int maxAND (int arr[], int n)
// {
//     int res = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<=n; j++){
//             res = max(res, arr[i] & arr[j]);
//         }
//     }
//     return res;
// }


int main(void){
    int arr[] = {4,8,12,16};
    cout<<maxAND(arr, 4);
    return 0;
}