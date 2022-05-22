/*Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

bool find3numbers(int arr[], int n, int x){
    //using hashmap
    for(int i = 0; i < n; i++){
        unordered_set<int> s;
        int currsum = x - arr[i];
        for(int j = i + 1; j < n; j++){
            if(s.find(currsum - arr[j]) != s.end()){
                printf("Triplet sum is %d, %d, %d", arr[i],
                       arr[j], currsum - arr[j]);
                return true;
            }
            s.insert(arr[j]);
        }
    }
    return false;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    find3numbers(arr, n, x);
    return 0;
    

    

}