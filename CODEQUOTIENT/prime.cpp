/*Given an integer n, the task is to check whether that the given integer is a prime number or not

Complete the function verifyPrime() given in the editor, that accepts an integer parameter n and returns true/1 if number is prime and false/0 if number is not prime.*/
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

bool verifyPrime(int n){
  //Since 0 and 1 are neither prime nor composite.
  if(n<=1)
    return false;
  for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;  
}
int main()
{
    //input the number
    int no;
    cin>>no;
    //checking through th function
    if (verifyPrime(no))
      cout<<"PRIME"<<endl; 
    else 
      cout<<"NOT PRIME"<<endl;   
  return 0;
}