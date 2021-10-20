/***Reverse an Array***/

#include <iostream>
using namespace std;

void revarray(int arr[], int t)
{
    int i,j,temp;
    j=t-1;
    for(i=0;i<j;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main() {
	
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	revarray(arr,n);
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
