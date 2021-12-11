#include<iostream>
using namespace std;

int majorityWins(int arr[], int n, int x, int y) {
 int countX=0, countY=0; 
 for(int i=0; i<n; i++){
     if(arr[i] == x)
        countX++;
     if(arr[i] == y)
        countY++;   
 }
 
 if(countX == countY) return min(x, y);
 return (countX>countY ?  x:  y);

}

int main(void){
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<majorityWins(arr, 8, 1, 7);
    return 0;
}