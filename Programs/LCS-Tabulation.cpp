#include<bits/stdc++.h>
using namespace std;

int  LCS(string s1, string s2, int m, int n){

  int dp[m+1][n+1];

  for(int i = 0; i <= m; i++){
    dp[i][0] = 0;
  }
  for(int j = 0; j <= n; j++){
    dp[0][j] = 0;
  }
  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){

      if (s1[i-1] == s2[j-1]){
        dp[i][j] = 1 + dp[i-1][j-1];
      }
      else{
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }
  return dp[m][n];
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