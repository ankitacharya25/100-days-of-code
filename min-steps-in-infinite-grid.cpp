//Minimum steps in infinte Grid(InterviewBit). Given Two arrays consisting of x and y coordinates find the number of steps to go from first co-ordinate to last
// Approach is to  find the diagonal distance between consecutive points and then check the horizontal distance, and take max of the both. The solution takes O(n) time.

#include<bits/stdc++.h>
using namespace std;

int Steps(vector<int> A, vector<int> B, int n, int m){
  int x, y, curr_x, curr_y, res;

  for (int i = 0; i < n-1; i++){
    curr_x = A[i];
    curr_y = B[i];
    x = A[i+1];
    y = B[i+1];

    int dy = abs(curr_x - x);  //absolute distance 
    int dx = abs(curr_y - y);

    res += max(dy, dx);
  }
  return res;
}
int main(){
  vector <int> A {4,1,4,10};
  vector <int> B  {6,2,5,12};
  int n = A.size();
  int m = B.size();
  cout << "Minimum steps: " << Steps(A, B, n, m);
  return 0;
}