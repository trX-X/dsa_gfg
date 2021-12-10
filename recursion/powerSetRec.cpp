#include<iostream>
#include<vector>
using namespace std;

// You are given a string. You need to print the lexicographically sorted power-set of the string.
// Note: The string s contains lowercase letter of alphabet.

// Input:
// s = abc
// Output: a ab abc ac b bc c
// Explanation: empty string, 
// a, ab, abc, ac, b, bc, c 
// are the sets.

vector <string> powerSet(string s)
{
  //Your code here
  
  if(s.length()==0){
      vector<string> v;
      string s = "";
      v.push_back(s);
      return v;
  }
  int n = s.length();
  vector<string> v = powerSet(s.substr(0,n-1));
  for(string i : powerSet(s.substr(0,n-1))){
      string x = i+s[n-1];
      v.push_back(x);
  }
  
  return v;
}

int main(void){
    auto v = powerSet("abc");
    for(auto& it : v)
        cout<<it<<' ';
    return 0;
}