/***Given an array a[] of size n.For every i from 0 to n-1 output max(a[0],a[1],....a[i])***/


/***Approach***/
/** keep a variable max which stores the maximum till ith element and iterate over the array and update**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int mx = -19999999999;
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){

        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        
        mx = max(mx, a[i]);

        cout << mx <<endl;
    }

    return 0;

}


//**Given an array arr[] of size N.The task is to find the first repeating element in the array of integers,i.e.,an elementthat occurs more than once and whose index of first occurence is smallest.**//
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    }
  const int N = 1e6+2;  //1e6=10^6
  int idx[N];
  for(int i=0;i<N;i++){
    idx[i]=-1;
  }

  int minidx=INT_MAX;
  for(int i=0;i<n;i++){

    if(idx[a[i]]!=-1)
    {
      minidx=min(minidx,idx[a[i]]);
    }
    else{
      idx[a[i]]=i;
    }

  }
  if(minidx==INT_MAX)
  {
    cout<<"-1"<<endl;
  }
  else
  {
    cout<<minidx<<endl;
  }



  return 0;

}
