#include<bits/stdc++.h>
#define vec vector<int>
using namespace std;

int valid_triplets(vec arr, vec cost, int n){
  int cost_3 = INT_MAX;

  for(int i = 0; i < n; i++){

    int cost_1 = INT_MAX, cost_2 = INT_MAX;

    for (int j = 0; j < i; j++){        //Checking left sub-array
      if (arr[j] < arr[i]){
        cost_1 = min(cost_1, cost[j]);
        //cout << "Cost 1 " << cost_1 <<"\n";
      }
    }
    for (int k = i+1; k < n; k++){        //Checking right sub-array
      if (arr[k] > arr[i]){
        cost_2 = min(cost_2, cost[k]);
        //cout << "Cost 2 " <<cost_2 <<"\n";
      }
    }
    if (cost_1 != INT_MAX && cost_2 != INT_MAX){
      int sum = cost_1 + cost_2 + cost[i];
      cost_3 = min(sum, cost_3);
      //cout << "Cost 3 " << cost_3 <<"\n";
    }
  }
  if (cost_3 == INT_MAX){
    return -1;
  }
    return cost_3;
}

int main(){
  vec arr, cost;
  int n;
  cout << "Enter number of elements\n";
  cin >> n;
  cout << "Enter elements of array\n";
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(x);
  }
  cout << "Enter cost of elements\n";
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    cost.push_back(x);
  }
  cout << "Cost minimum : " << valid_triplets(arr, cost, n);
  
  return 0;
}