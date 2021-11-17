#include<iostream>
using namespace std;


class Solution{
public:
    int counter = 2;
    int np;
    bool isLucky(int n) {
    if(n<counter)
        return 1;
    if(n%counter == 0)
        return 0;
        
    np = n;
    np = np-np/counter;
    counter++;
    return isLucky(np);
    }
};
// bool isLucky(int n){
//     static int counter = 2;
//     if(n < counter)
//         return 1;
//     if(n%counter == 0)
//         return 0;

//     int counter_dig = n - (n/2);
//     counter++;
//     return isLucky(counter_dig);         

// }

int main(void){
    Solution sol;
    cout<<sol.isLucky(51);
    return 0;
}

