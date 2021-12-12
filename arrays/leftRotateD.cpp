#include<iostream>
using namespace std;

//Naive solution using left Rotate One D times
// void leftRotateArray(int arr[], int n){
//     int temp = arr[0];
//     for(int i=1; i<n;i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }

// void leftRotateD(int arr[], int n, int d){
//     for(int i=0; i<d; i++)
//         leftRotateArray(arr, n);
// }

//Better Solution
// void leftRotateD(int arr[], int n, int d){
//     int temp[d];
//     for(int i=0; i<d; i++)
//         temp[i] = arr[i];

//     for(int i=d; i<n; i++)
//         arr[i-d] = arr[i];

//     for(int i=0; i<d; i++)
//         arr[n-d+i] = temp[i];         
// }

//Another Better solution using Reverse
// void reverse(int arr[], int low, int high){
//     while(low<high){
//         swap(arr[low], arr[high]);
//         low++;
//         high--;
//     }
// }

// void leftRotateD(int arr[], int n, int d){
//     reverse(arr, 0, d-1);
//     reverse(arr, d, n-1);
//     reverse(arr, 0, n-1);
// }
 
//O(n) space and O(1) time solution
int gcd(int a, int b){
    if(b==0)
        return a;
    else 
        return gcd(b, a%b);    
}

void leftRotateD(int arr[], int n, int d){
    d = d%n;    //to handle If ever d is greater than n
    int g_c_d = gcd(d, n);
    for(int i=0; i<g_c_d; i++){
        int temp = arr[0];
        int j=i;

        while(1){
            int k = j+d;
            if(k >= n)
                k = k-n;
            if(k==i)
                break;
            arr[j] = arr[k];
            j=k;         
        }
        arr[j] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    leftRotateD(arr, 5, 2);
    return 0;
}