#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
  
  double r1 = (double)a.first/a.second;
  double r2 = (double)b.first/b.second;

  return r1 > r2;
}

int Books(int input1, int input2, int input3[], int input4[]){
  vector <pair<int, int>> arr;

  for(int i = 0; i < input1; i++){
    arr.push_back(make_pair(input3[i], input4[i]));
  }

  sort(arr.begin(), arr.end(), cmp);

  int count = 0;
  int points = 0;
   for (int i = 0; i < input1; i++){
     if(count+arr[i].second <= input2){
     points += arr[i].first;
     count += arr[i].second;
     }
   }
   return points;
}


int main(){
  int input1, input2;
  cin >> input1 >> input2;
  int input3[input1], input4[input1];
  for(int i = 0; i < input1; i++){
    cin >> input3[i];
  }
  for(int i = 0; i < input1; i++){
    cin >> input4[i];
  }
  cout << Books(input1, input2, input3, input4);
  return 0;
}