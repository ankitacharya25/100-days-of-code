#include<bits/stdc++.h>
using namespace std;

int GetJumpcount(int input1, int input2, int input3, int input4[]){
  
  int index = 0;
  for(int i = 0; i < input3; i++){
    int dist = 0;
    while(dist < input4[i]){
      index += 1;
      dist += input1;
      if(dist >= input4[i]) break;
      dist -= input2;
    }
  }
  return index ;
}

int main(){
  int input1, input2, input3;
  cin >> input1 >> input2 >> input3;
  int input4[input3];
  for(int i = 0; i < input3; i++){
    cin >> input4[i];
  }
  cout << GetJumpcount(input1, input2, input3, input4);
  return 0;
}