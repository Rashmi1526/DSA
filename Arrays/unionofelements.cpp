/*Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays and return the count of elements in the union set*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  //Function to return the count of numbers of elements in union of two arrays
  int Union(int arr[],int n, int arr1[], int m){
    set<int> unionn;
    for(int i=0;i<n;i++)
    {
      unionn.insert(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
      unionn.insert(arr1[i]);
    }
    return unionn.size();
  }
};

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n], arr1[m];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(int i=0;i<m;i++){
      cin>>arr1[i];
    }
    Solution ob;
    cout<<ob.Union(arr,n,arr1,m)<<endl;
  }
  return 0;
}
