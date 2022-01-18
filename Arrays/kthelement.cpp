/*Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    //arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        //code here
        sort(arr,arr+r+1);
        return arr[k-1];
    }
};
int main(){
  int t;//testcase
  cin>>t;
  while(t--)
  {
    int n;//number of elements
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int k;
    cin>>k;
    Solution ob;
    cout<<"Kth smallest element in the given array is "<<ob.kthSmallest(a , 0, n-1, k)<<endl;
  }
  return 0;
}
