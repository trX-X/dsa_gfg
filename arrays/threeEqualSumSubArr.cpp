#include<iostream>
using namespace std;

int findSplit(int arr[], int n){
    int preSum=0;
    int ind1 = -1, ind2 = -1;
    int S;
    S = arr[0];
    for(int i=1; i<n; i++)  
        S += arr[i];
    if(S%3 != 0)
        return -1;    
    int S1 = S/3;
    int S2 = 2*S1;
    for(int i=0; i<n-1; i++){
        preSum += arr[i];
        if((preSum == S1) && (ind1 == -1))
            ind1 = i;
        else if((preSum == S2) && (ind1 != -1)){
            ind2 = i;
            break;
        }    
    }
    if((ind1 != -1) && (ind2 != -1)){
        cout<<"("<<ind1<<", "<<ind2<<")"<<endl;
        return 1;
    }
    return -1;

}

int main(void){
    int arr[] = {1, 3, 4, 0, 4};
    cout<<findSplit(arr, 5);
    return 0;
}