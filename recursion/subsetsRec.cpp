#include<iostream>
using namespace std;

void subsetsRec(string &str, string curr=" ", int i=0){
    if(i == str.length()){
        cout<<curr<<" ";
        return;
    }

    subsetsRec(str, curr, i+1);
    subsetsRec(str, curr+str[i], i+1);
}


int main(void){
    string str = "AB";
    subsetsRec(str);
    return 0;
}