#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        int disc = (b*b) - (4*a*c);
        cout<<"Disc "<<disc<<endl;
        if(disc == 0){
            int x = -b / (2*a);
            cout<<"Hii";
            return { x, x };
        }
        else if(disc > 0){
            cout<<"Hi from disc greater than 0"<<endl;
            int x1 = floor((-b + sqrt(disc))/ (2*a));
            int x2 = floor((-b - sqrt(disc))/ (2*a));
            cout<<"X1"<<x1<<endl;
            cout<<"X2"<<x2<<endl;
            int maxroot = max(x1, x2);
            int minroot = min(x1, x2);
            return {maxroot, minroot};
        }else{
            cout<<"Hi from else";
            return { -1 };
        }
}

void print(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i);
    }
}

int main(void){
    vector<int> res = quadraticRoots(280 ,399 ,573);
    print(res);
    return 0;
}