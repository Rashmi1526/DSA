/***Given an array a[] of size n.For every i from 0 to n-1 output max(a[0],a[1],....a[i])***/


/***Approach***/
/** keep a variable max which stores the maximum till ith element and iterate over the array and update**/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int mx = -19999999999;
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++){

        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        
        mx = max(mx, a[i]);

        cout << mx <<endl;
    }

    return 0;

}