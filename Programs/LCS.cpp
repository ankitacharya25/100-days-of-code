//Recursive solution of Longest common subsequence problem

#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, int m, int n){
  if (m == 0 || n == 0){
    return 0;
  }
  if (s1[m-1] == s2[n-1]){
    return 1 +(LCS(s1, s2, m-1, n-1));
  }
  else{
    return max(LCS(s1, s2, m-1, n), LCS(s1, s2, m, n-1));
  }
}

int main(){
  string s1, s2;
  int m, n ;
  cout << "Enter string 1:\n";
  cin >> s1;
  cout << "Enter string 2:\n";
  cin >> s2;
  m = s1.size();
  n = s2.size();
  cout << "Length of LCS: " << LCS(s1, s2, m, n);
  return 0;
}