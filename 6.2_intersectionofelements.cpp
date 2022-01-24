/*Intersection of two sorted arrays*/
#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int m, int n) 
{

    int i = 0;
    int j = 0;

    while(i < m && j < n)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    
}
int main(){
int m,n;
    cin>>m>>n;
    int arr1[m], arr2[n];
    for(int i=0;i<m;i++)
    {
      cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
      cin>>arr2[i];
    }
    cout<<"Intersection of two arrays is: ";
    intersection( arr1,  arr2,  m, n);
    
}