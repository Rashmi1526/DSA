/*Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.*/

#include<bits/stdc++.h>
using namespace std;


//Function to find the minimum difference
int min_difference(int arr[], int n, int k)
{
  //sort the array
  sort(arr,arr+n);
  //set the diff as the difference between the first and last element of sorted array
  int diff = arr[n-1]-arr[0];
  int max1,min1;
  for(int i=0;i<n-1;i++)
  {
    if(arr[i+1]<k)
    {
      continue;
    }
    else
    {
      min1 = min(arr[0]+k,arr[i+1]-k);
      max1 = max(arr[i]+k,arr[n-1]-k);
      diff = min(diff,max1-min1);
    }
  }
  return diff;
}
int main()
{
  int n,k,ans;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  ans = min_difference(a,n,k);
  cout<<ans<<"\n";
  return 0;
}