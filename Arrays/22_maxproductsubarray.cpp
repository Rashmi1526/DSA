/*Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Example 1:

Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

long long maxProduct(vector<int> arr, int n){
    ll ans = arr[0], maxi = arr[0], mini = arr[0];
    ll c1, c2;
    for(int i = 1; i < n; i++){
        c1 = maxi * arr[i];
        c2 = mini * arr[i];
        maxi = max( (ll) arr[i], max(c1,c2));
        mini = min( (ll) arr[i], min(c1,c2) );
        ans = max(ans, maxi);
    }
    return ans;
}

int main(){
    //Enter size
    int n;
    cin>>n;
    //Enter vector array
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    int ans1;
    ans1 = maxProduct(arr, n);
    cout<< ans1 <<endl;
}
