#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void multiply(int x, vector<int>& m);
void factorial(int N){
    vector<int> result;
    result.push_back(1);
    for(int x=2; x<=N; x++){
        multiply(x, result);
    }
    cout<<"Factorial is ...\n";
    reverse(result.begin(), result.end());
    vector<int>::iterator it;
    for(it=result.begin(); it!=result.end(); it++){
        cout<< *it;
    }
    cout<<"/n *************** \n"<<result.size();
}

void multiply(int x, vector<int>& m){
    int carry=0;
    vector<int>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        int prod = (*it) * x + carry;
        *it = prod%10;
        carry=prod/10;
    }
    while(carry){
        m.push_back(carry%10);
        carry=carry/10;
    }
}

int main(void){
    factorial(1000);
    return 0;
}