#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = 0, max2= -1;
    vector<int> res;
    //Max element 
    for(int i=1; i<sizeOfArray; i++)
    if(arr[i] > arr[max])
        max = i;

    res.push_back(arr[max]);
    //Second Max element 
    for(int i=0; i<sizeOfArray; i++){
        if(arr[i] != arr[max]){
            if(max2 == -1)
                max2 = i;
            else if(arr[i] > arr[max2])
                max2=i;    
        }
    }
    if(max2 < 0){
        res.push_back(-1);
        return res;
    }
    res.push_back(arr[max2]);
    return res;
}

int main(void){
    int arr[] = {1000, 1000, 1000, 1000, 1000, 100};
    vector<int> resVec = largestAndSecondLargest(6, arr);
    for(auto i = resVec.begin(); i != resVec.end(); ++i)
        cout << *i << " ";
    // cout<<largestAndSecondLargest(5, arr);
    return 0;
}