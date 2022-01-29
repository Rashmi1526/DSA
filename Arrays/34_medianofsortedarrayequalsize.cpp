#include <bits/stdc++.h>
using namespace std;
int Calculate_median(int a1[], int a2[], int n)
{
int i = 0;
int j = 0;
int cnt;
int x = -1, y = -1;

for (cnt = 0; cnt <= n; cnt++)
{
if (i == n)
{
x = y;
y = a2[0];
break;
}
else if (j == n)
{
x = y;
y = a1[0];
break;
}

if (a1[i] < a2[j])
{
/* Store the prev median */
x = y;
y = a1[i];
i++;
}
else
{
/* Store the prev median */
x = y;
y = a2[j];
j++;
}
}

return (x + y)/2;
}
int main()
{
int n, i;
cin>>n;
int a1[n];
int a2[n];

for(i=0; i<n; i++)
cin>> a1[i];

for(i=0; i<n; i++)
cin>> a2[i];

cout << Calculate_median(a1, a2, n) ;
return 0;
}