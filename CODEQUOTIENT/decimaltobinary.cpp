/*Given a decimal number n, print its binary equivalent.

To convert a decimal number(i.e. in base 10) into a binary number(i.e. in base 2), repeatedly divide the number by 2 until it becomes 0. After each division step store the remainder(0 OR 1) in an array. Finally print the array in the reverse order.

Example: n = 25

25 / 2 = 12 Remainder: 1

12 / 2 = 6 Remainder: 0

6 / 2 = 3 Remainder: 0

3 / 2 = 1 Remainder: 1

1 / 2 = 0 Remainder: 1

 Printing the remainders in the reverse order we’ll get 11001.

Time Complexity: O(logn)

Space Complexity: O(1)*/

#include<iostream>
using namespace std;

void decimaltobinary(int n)
{
    int bin_num[32];
    int i=0;
    while(n>0)
    {
        bin_num[i++]=n%2;
        n=n/2;
    }
    //printing the reverse of the binary array;
    for(int j=i-1;j>=0;j--)
    {
        cout<<bin_num[j];
    }
}
int main()
{
    int n;
    cin>>n;
    decimaltobinary(n);
    cout<<endl;
    return 0;
}
