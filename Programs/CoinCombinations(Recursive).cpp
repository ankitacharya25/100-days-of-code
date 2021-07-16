#include<bits/stdc++.h>
using namespace std;

int sum;

int Coin_Combinations(vector <int> arr, int n, int k){
  
  if (sum == k){
    return 0;
  }

  for (int i = 0; i < n; i++){
    for
  }

}

int main(){
  vector <int> arr;
  int n, k;
  cout << "Enter size of array\n";
  cin >> n;
  cout << "Enter array elements\n";
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(x);
  }
  cout << "Enter target value 'k' \n";
  cin >> k;
  cout << "No. of possible combinaitons: " << Coin_Combinations(arr, n, k);
  return 0;
}