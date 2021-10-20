/*Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  // arr: input array
  // n: size of array
  //Function to find the sum of contiguous subarray with maximum sum.
  long long maxSubarraySum(int arr[], int n)
  {
    long long curr_sum=0;
    long long max_sum= INT_MIN;
    for(int i=0;i<n;i++)
    {
      curr_sum+=arr[i];
      max_sum=max(max_sum,curr_sum);
      if(curr_sum<0)
      {
        curr_sum=0;
      }
    }
    return max_sum;
  }
};

int main(){
  int t,n;
  cin>>t;//input testcases
  while(t--)
  {
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    Solution ob;
    cout<<ob.maxSubarraySum(a,n)<<endl;
  }
  return 0;
}
