/*  
Write a program to print the n lines of the below pyramid

For n = 5 : 

1
212
32123
4321234
543212345

For printing the pattern in n rows, run a loop from i = 1 to n.

For each i th row, run two separate loops.
First loop will run from j = i to 1, in each iteration print j.
Second loop will run from j = 2 to i, in each iteration print j.
 

Time Complexity: O(n*n)

Space Complexity: O(1)*/

#include<cstdio>
#include<cmath>
using namespace std;
void printpyramid(int n)
{
  for(int i=0;i<=n;i++)
  {
    for(int j=i;j>=1;j--)
      cout<<j;
    for(int j=2;j<=i;j++)
      cout<<j;
    cout<<endl;
  }
}
int main()
{
  int n;
  cin>>n;
  printpyramid(n);
   return 0;
}