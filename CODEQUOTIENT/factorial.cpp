/*Write a recursive function factorial that accepts an integer n as a parameter and returns the factorial of n, or n!.*/


#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int factorial(int n){
  if (n == 0)
        return 1;    
    return n * factorial(n-1);
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
  }
  return 0;
}
