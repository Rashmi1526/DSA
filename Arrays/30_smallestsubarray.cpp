/*Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.*/

#include<bits/stdc++.h>
#include<vector>
#include<limits>

using namespace std;

int smallestsubarraywithgivensum(vector<int>& nums, int target){
    //Sliding window approach
    int min_length = INT_MAX;
    int windowsum = 0;
    int windowstart = 0;
    for(int windowend = 0; windowend < nums.size(); windowend++){
        windowsum += nums[windowend];
        while(windowsum >= target){
            min_length = min( min_length, windowend - windowstart +1);
            windowsum -= nums[windowstart];
            windowstart--;
        }
    }
    return min_length == INT_MAX?0:min_length;
}

int main(){
    int n, x;
    cin>> n>>x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout<<smallestsubarraywithgivensum( arr, x)<<endl;
}