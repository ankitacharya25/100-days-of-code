//Fractional Knapsack
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
  
  double r1 = (double)a.first/a.second;
  double r2 = (double)b.first/b.second;

  return r1 > r2;
}

int fractional(vector <pair<int, int>> arr, int w, int n){
  
  sort(arr.begin(), arr.end(), cmp);
  double res = 0.0;
  int curr_wt = w;
  for (int i = 0; i < n; i++){
    
    if (arr[i].second <= curr_wt){
      curr_wt = curr_wt - arr[i].second;
      res = res + arr[i].first;
      cout << "Curr - " << curr_wt <<"\t";
      cout << "weight - " << res <<"\n";
    }
    else{
      res = res + arr[i].first * ((double)curr_wt / arr[i].second);
    }
  }
  return res;
}

int main(){
  vector <pair<int, int>> arr = {{120, 30}, {100,20}, {60,10}};
  int w = 50;
  int n = arr.size();
  cout << fractional(arr, w, n);
  return 0;
}