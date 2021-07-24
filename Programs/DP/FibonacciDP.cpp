#include<bits/stdc++.h>
using namespace std;
int fibo(int n, vector<int> dp){

    if(dp[n] == -1){
      int res;
      if(n == 0 || n == 1){
        res = n;
      }
      else{
        res = fibo(n-1, dp) + fibo(n-2, dp);
      }
      dp[n] = res;
    }
    return dp[n];
}
int main(){
  int n;
  cout << "Enter \n";
  cin >> n;
  vector<int> dp(n+1, -1);
  cout << fibo(n, dp);
  return 0;
}