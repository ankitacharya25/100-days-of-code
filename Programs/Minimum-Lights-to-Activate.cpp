/*There is a corridor in a Jail which is N units long. Given an array A of size N. The ith index of this array is 0 if the light at ith position is faulty otherwise it is 1.

All the lights are of specific power B which if is placed at position X, it can light the corridor from [ X-B+1, X+B-1].

Initially all lights are off.

Return the minimum number of lights to be turned ON to light the whole corridor or -1 if the whole corridor cannot be lighted. */

#include<bits/stdc++.h>
using namespace std;

int MinimumLights(vector<int> &arr, int B){
  int n = arr.size();
  int res = 0;
  int i = 0;
  int t = 0;

  while(i < n){
    int flag = 0;
    for(int x = i + B -1; x > t; x--){
      if (arr[x] == 1){
        flag = 1;
        res++;
        t = x + 1;
        i = x + B;
        break;
      }
    }
    if(i > n){
      return res;
    }
    if(flag == 0){
      return -1;
    }
  }
  return res;
}

int main(){
  vector<int> arr {1, 0, 0, 1, 1, 0, 0, 1, 0};
  int B = 3;
  cout << MinimumLights(arr, B);
  return 0;
}