/*Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order without using anybuilt-in function*/

//Approach = Three way partiotioning(Quick sort)

//This question is a simple variation of Dutch National Flag Problem

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int low = 0, mid =0, high = n-1;
        
        while(mid <= high){
            if(a[mid] == 0){
                swap(&a[low], &a[mid]);
                ++low, ++mid;
            }
            else if(a[mid] > 1){
                swap(&a[high], &a[mid]);
                high--;
            }
            else{
                ++mid;
            }
        }
    }
    void swap(int *x, int *y){
    int temp ;
    temp = *x;
    *x = *y;
    *y = temp;
}
    
};



int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

 