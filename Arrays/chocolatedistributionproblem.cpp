/*Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.*/

//CODE
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
  long long start = 0;
  long long end = m - 1;
  long long mini = INT_MAX;
  while (end < n) {
    mini = min(mini, abs(a[start] - a[end]));
    start++;
    end++;
  }
  return mini;
    
    } 
};
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long> a;
    long long x;
    for(long long i=0;i<n;i++){
      cin>>x;
      a.push_back(x);
    }
    long long m;
    cin>>m;
    Solution ob;
    cout<<ob.findMinDiff(a,n,m)<<endl;
  }
  return 0;
}
