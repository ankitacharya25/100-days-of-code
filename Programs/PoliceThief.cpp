#include<bits/stdc++.h>
using namespace std;

int PoliceThief(vector<char> arr, int k){
  int n = arr.size();
  vector<int> visited(n, 0);
  //each Policeman can catch only one thief

  //Brute-force approach
  int count = 0;
  for(int i = 0; i < n; ++i){
    if(arr[i] == 'P'){
      for(int j = 1; j <= k; ++j){
        if(i>j){
          if(visited[i-j] == 0 && arr[i-j] == 'T'){
            visited[i-j] = 1;
            count+=1;
            break;
          }
        }
        if(i+j<n){
          if(visited[i+j] == 0 && arr[i+j] == 'T'){
            visited[i+j] = 1;
            count+=1;
            break;
          }
        }
      }
    }
  }
  return count;
}

int main(){
  vector<char> arr {'T','T','P','P','T','P'};
  int k;
  cout << "Enter k\n";
  cin >> k;
  cout << PoliceThief(arr, k);
  return 0;
}