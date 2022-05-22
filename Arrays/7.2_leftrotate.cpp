/*Given an array, rotate the array by one position in left direction.*/


#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}



void leftrotate(int arr[], int d, int n){
  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
}
 
int main()
{
    
        int n, d ;
        cin >> n >> d;
        int a[n] , i;
        for(i=0;i<n;i++)
         cin >> a[i];
        cout <<"Left Rotation: ";
        leftrotate(a, d, n);
        printArray(a, n);
    
        return 0;
}

