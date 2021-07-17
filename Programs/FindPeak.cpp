//Find peak element in array.(Local maxima)

#include<bits/stdc++.h>
using namespace std;
int findPeak(int arr[], int n, int low, int high){
  //If array contains only a single element
  if(n == 1){
    return 0;
  }

  //Using Binary search
  int mid = low + (high-low)/2;

  if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
      (mid == n - 1 || arr[mid + 1] <= arr[mid])){
    return arr[mid];
  }
  else if(mid > 0 && arr[mid-1] > arr[mid]){
    return findPeak(arr, n, low, mid-1);
  }
  else{
    return findPeak(arr, n, mid+1, high);
  }
  return 0; //If no such element found
}
int main(){
  //int arr[] {11, 2, 13, 15, 21, 17, 18, 16};
  int arr[] {10, 10, 80, 90, 90};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Peak element: " << findPeak(arr, n, 0, n-1);
  return 0;
}