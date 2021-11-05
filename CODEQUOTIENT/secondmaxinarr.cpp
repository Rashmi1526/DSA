/*Write a program to find the 2nd maximum element in an array.
Assume the size of array as 5. Each test case will have 5 elements in five different lines.*/

//Code
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

//function to find the second max element
int find2ndMax(int arr[],int n)
{
  //sorting the array in descending order
  sort( arr, arr+n, greater<int>());
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[0])
      return i;
    if(arr[i]==0 && arr[0]==0){
      i=0; 
      return i;
    }
  }
  return -1;
}
int main()
{
  int arr[5];
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  int i = find2ndMax(arr, 5);
  if (i==0)
    cout<<endl;
   if (i != -1)
       cout << arr[i];
   else
       cout << "Does not exist";
    return 0;
}
