#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Possible Words From Phone Digits 
// Given a keypad as shown in the diagram, and an N digit number which is represented by array a[ ],
//  the task is to list all words which are possible by pressing these numbers.

// Input: N = 3, a[] = {2, 3, 4}
// Output:
// adg adh adi aeg aeh aei afg afh afi 
// bdg bdh bdi beg beh bei bfg bfh bfi 
// cdg cdh cdi ceg ceh cei cfg cfh cfi 
// Explanation: When we press 2,3,4 then 
// adg, adh, adi, ... cfi are the list of 
// possible words.

vector<string> possibleWords(int a[], int N)
{
      if(N<1){
            vector<string> v;
            v.push_back("");
            return v;
        }
        vector<string> v;
        vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        int len = keys[a[N-1]].length();
        for(int i=0;i<len;i++){
            for(string j : possibleWords(a,N-1)){
                char c = keys[a[N-1]][i];
                v.push_back(j+c);
            }
        }
        
        sort(v.begin(),v.end());
        return v;
    
        
}

int main(void){
    int a[] = {2,3,4};
    vector<string> rv;
    rv = possibleWords(a , 3);
    for(string i: rv){
        cout<<i<<' ';
    }
    cout<<"\n";
    return 0;
}