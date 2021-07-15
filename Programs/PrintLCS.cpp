#include<bits/stdc++.h>
using namespace std;

string LCS(string s1, string s2, int m, int n){

  int dp[m+1][n+1];

  for(int i = 0; i <= m; i++){
    dp[i][0] = 0;
  }
  for(int j = 0; j <= n; j++){
    dp[0][j] = 0;
  }
  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){

      if (i == 0 || j ==0){
        dp[i][j] = 0;
      }
      else if (s1[i-1] == s2[j-1]){
        dp[i][j] = 1 + dp[i-1][j-1];
      }
      else{
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }
  int idx = dp[m][n];
  char lcs[idx+1];
  lcs[idx] = '\0';

  int i = m, j = n;
  while(i > 0 && j > 0){

    if(s1[i-1] == s2[j-1]){
      lcs[idx-1] = s1[i-1];
      i--, j--, idx--;

    }
    else if (dp[i-1][j] > dp[i][j-1]){
      i--;
    }
    else{
      j--;
    }

  }
return lcs;

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
  //cout << "Length of LCS: " << LCS(s1, s2, m, n);
  cout << "LCS: " << LCS(s1, s2, m, n);
  return 0;
}