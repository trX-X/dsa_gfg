#include<iostream>
using namespace std;

int findRepeating(int arr[], int n){
    int slow = arr[0]+1, fast = arr[0]+1;
    do{
        slow = arr[slow]+1;
        fast = arr[arr[fast]+1]+1;
    }while(slow != fast);
    slow = arr[0]+1;
    while(slow != fast){
        fast = arr[fast]+1;
        slow = arr[slow]+1;
    }
    return slow-1;
}

int main(void){
    int arr[] = {0, 2, 1, 3, 5, 4, 6, 2};
    cout<<findRepeating(arr, 8);
    return 0;
}