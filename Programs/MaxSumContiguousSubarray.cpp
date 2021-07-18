/* Find the contiguous subarray within an array, A of length N which has the largest sum.

Input Format:

The first and the only argument contains an integer array, A. */

#include<bits/stdc++.h>
using namespace std;

int MaxSumSubarray(vector<int> arr){
  int n = arr.size();
  int res = arr[0];
  int maxsum = arr[0];

  for (int i = 0; i < n; ++i){
    maxsum = max(maxsum + arr[i], arr[i]);
    res = max(res, maxsum);
  }
  return res;
}

int main(){
  vector <int> arr {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << "Maximum Sum of any Subarray is: " << MaxSumSubarray(arr);
  return 0;
}