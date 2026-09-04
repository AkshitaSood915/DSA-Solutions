#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cout<<"Enter the string: ";
  cin>>s;

  int n=s.length();

  int totalSubstrings=n*(n+1)/2;

  cout<<"Total no of Substring are: "<<totalSubstrings;
  return 0;
}