#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Rearrange Array Alternately

// Given a sorted array of positive integers. Your task is to rearrange 
// the array elements alternatively i.e first element should be max value,
// second should be min value, third should be second max, fourth should be second min and so on.

// Input:
// N = 6
// arr[] = {1,2,3,4,5,6}
// Output: 6 1 5 2 4 3
// Explanation: Max element = 6, min = 1, 
// second max = 5, second min = 2, and 
// so on... Modified array is : 6 1 5 2 4 3.

// Input:
// N = 11
// arr[]={10,20,30,40,50,60,70,80,90,100,110}
// Output:110 10 100 20 90 30 80 40 70 50 60
// Explanation: Max element = 110, min = 10, 
// second max = 100, second min = 20, and 
// so on... Modified array is : 
// 110 10 100 20 90 30 80 40 70 50 60.

// void rearrange(long long *arr, int n) 
// { 
//     int temp[n];
//     // memset(temp, 0, n);
//     int min = 0, max = n-1;
//     bool flag = true; //This helps us iterating through array and stops alternately
//     for(int i=0; i<n; i++){
//         if(flag){
//             temp[i] = arr[max];
//             max--;
//         }
//         else{
//             temp[i] = arr[min];
//             min++;
//         }
//         flag = !flag;
//     }	
//     for (int i = 0; i < n; i++)
//         arr[i] = temp[i];
//     for (int i = 0; i < n; i++)
//         cout<<arr[i]<<" ";
// }

// void rearrange(long long *arr, int n){
//   int max_idx = n - 1, min_idx = 0;

// 	// store maximum element of array
// 	int max_elem = arr[n - 1] + 1;

// 	// traverse array elements
// 	for (int i = 0; i < n; i++) {
// 		// at even index : we have to put maximum element
// 		if (i % 2 == 0) {
// 			arr[i] += (arr[max_idx] % max_elem) * max_elem;
// 			max_idx--;
// 		}

// 		// at odd index : we have to put minimum element
// 		else {
// 			arr[i] += (arr[min_idx] % max_elem) * max_elem;
// 			min_idx++;
// 		}
// 	}

// 	// array elements back to it's original form
// 	for (int i = 0; i < n; i++)
// 		arr[i] = arr[i] / max_elem;
//     for (int i = 0; i < n; i++)
//       cout<<arr[i]<<" ";



// }


int main(void){
    long long arr[] = {4,0,2,1,3};
    rearrange(arr, 5);
    
    return 0;
}