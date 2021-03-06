/*Given an array of integers. Find the Inversion Count in the array. */

//Code
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  long long int merge_and_count(long long arr[],long long  l,long long  m,long long  r)
     {
         long long  n1=m-l+1;
         long long  n2=r-m;
         long long left[n1],right[n2];
         for(long long  i=0;i<n1;i++)
         {
             left[i]=arr[i+l];
         }
         for(long long  i=0;i<n2;i++)
         {
             right[i]=arr[m+1+i];
         }
         long long  i=0,j=0,k=l;
         long long  res=0;
         while(i<n1 && j<n2)
         {
             if(left[i]<=right[j])
             {
                 arr[k++]=left[i];
                 i++;
             }
             else
             {
                 arr[k++]=right[j];
                 j++;
                 res=res+(n1-i);
             }
         }
         while(i<n1)
         {
             arr[k++]=left[i];
             i++;
         }
         while(j<n2)
         {
             arr[k++]=right[j];
             j++;
         }
         return res;
     }
     
     long long int inversion(long long arr[],long long  l,long long  r)
     {
         long long  res=0;
         if(l<r)
         {
             long long m=l+(r-l)/2;
             res=res+inversion(arr,l,m);
             res=res+inversion(arr,m+1,r);
             res=res+merge_and_count(arr,l,m,r);
         }
         return res;
     }
     
    long long int inversionCount(long long arr[], long long n)
    {
          long long  l=0;
          long long  r=n-1;
          return inversion(arr,l,r);
    }

};
int main()
{
  long long n;
  cin>>n;
  long long A[n];
  for(long long i=0;i<n;i++)
   cin>>A[i];
  Solution obj;
  cout<<obj.inversionCount(A, n)<<endl; 
  return 0;    
}
