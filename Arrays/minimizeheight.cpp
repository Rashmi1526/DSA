/*Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
       sort(arr,arr+n);
       int diff=arr[n-1]-arr[0];
       int maxi,mini;
       for(int i=0;i<n-1;i++){
           if(arr[i+1]<k){
               continue;
           }
           else{
               mini=min(arr[0]+k,arr[i+1]-k);
               maxi=max(arr[i]+k,arr[n-1]-k);
               diff=min(diff,maxi-mini);
           }
       }
       return diff;
    }
};

int main(){
  int n,k;
  cin>>k>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  Solution ob;
  auto ans = ob.getMinDiff(arr,n,k);
  cout<<ans<<endl;
  return 0;
}

