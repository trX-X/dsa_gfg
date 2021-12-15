#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Naive solution
// int maxProfit(int arr[], int start, int end){
//     if(end <= start)
//         return 0;
//     int profit = 0;
//     for(int i=start; i<end; i++){
//         for(int j=i+1; j<=end; j++){
//             if(arr[j] > arr[i]){
//                 int curr_profit = arr[j] - arr[i] + maxProfit(arr, start, i-1) + maxProfit(arr, j+1, end);
//                 profit = max(curr_profit, profit);
//             }
            
//         }
    
//     }
//   return profit;   
// }

//Efficient solution
int maxProfit(int arr[], int n){
    int profit = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > arr[i-1]){
            profit += (arr[i] - arr[i-1]);
        }
    }
    return profit;
}

// //Practice question, return the pairs of buy and sell
// The cost of stock on each day is given in an array A[] of size N.
// Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

// Input:
// N = 7
// A[] = {100,180,260,310,40,535,695}
// Output:
// (0 3) (4 6)
// Explanation:
// One possible solution is (0 3) (4 6)
// We can buy stock on day 0,
// and sell it on 3rd day, which will 
// give us maximum profit. Now, we buy 
// stock on day 4 and sell it on day 6.

// Input:
// N = 5
// A[] = {4,2,2,2,4}
// Output:
// (3 4)
// Explanation:
// There are multiple possible solutions.
// one of them is (3 4)
// We can buy stock on day 3,
// and sell it on 4th day, which will 
// give us maximum profit.


vector<vector<int> > stockBuySell(vector<int> A, int n){
    vector<vector<int>> res;
    if (n == 1)
        return res;

     int i = 0;
    while (i < n - 1) {
 
        while ((i < n - 1) && (A[i + 1] <= A[i]))
            i++;
        if (i == n - 1)
            break;
        int buy = i++;
        while ((i < n) && (A[i] >= A[i - 1]))
            i++;

        int sell = i - 1;
        res.push_back({buy, sell});
    }    

    return res;
}

int main(void){
    // int price[] = { 100, 180, 260, 310, 40, 535, 695 };
    
    vector<int> price = { 100, 180, 260, 310, 40, 535, 695 };
    int n = price.size();
    stockBuySell(price, n);
 
    // cout<<maxProfit(arr, 0, 4);
    // cout<<maxProfit(arr, 5);
    return 0;
}