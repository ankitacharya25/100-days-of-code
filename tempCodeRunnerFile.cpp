#include <bits/stdc++.h>
using namespace std;

int dp(int curr, int i, int n, int t, int points[], int tim[])
{
    if(t<0)
      return curr-points[i+1];
    if(i==n)
      return curr;
      
    return max( dp(curr+points[i], i+1, n, t-tim[i], points, tim) , dp(curr,i+1,n,t,points,tim) );  
}

int Books(int n, int t, int points[], int tim[])
{
    return dp(0,0,n,t,points,tim);
}

int main ()
{
    int points[]={2,6,9};
    int tim[]={3,5,3};
    cout<<Books(3,7,points,tim);
    return 0;
}