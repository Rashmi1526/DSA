/*Write a program to generate and print the first n terms of the Fibonacci sequence where n >=1.

The idea is to take three variables a, b, c. At each point of time a and b will store the values of the last two terms and c will store the new term(i.e. a + b). Using this method we’ll generate the first n terms of the Fibonacci sequence.

Time Complexity: O(n)

Space Complexity: O(1)*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void fibonacci(int n)
{
  int a=0, b=1, c;
  if(n==1)
    cout<<0<<endl;
  else
  {
  if(n>=0)
    cout<<a<<endl;
  if(n>=1)
    cout<<b<<endl;
  for(int i=2;i<n;i++)
  {
    c=a+b;
    cout<<c<<endl;
    a=b;
    b=c;
  }
  }
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}


/*In the previous approach we used variable c to store the newly generated terms, but we can skip that and directly print (a + b) where a, b denotes the last two terms of the sequence. Finally, to update the values of a, b after each iteration we will assign (a + b) to variable b and  (b - a) to variable a.

Time Complexity: O( n)

Space Complexity: O(1)*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void fibonacci(int n)
{
  int a=0, b=1;
  if(n==1)
    cout<<0<<endl;
  else
  {
  if(n>=0)
    cout<<a<<endl;
  if(n>=1)
    cout<<b<<endl;
  for(int i=2;i<n;i++)
  {
    cout<<a+b<<endl;
    b=a+b;
    a=b-a;
  }
  }
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}
