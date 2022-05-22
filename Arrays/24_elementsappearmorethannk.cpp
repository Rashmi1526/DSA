/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]*/

#include<bits/stdc++.h>
using namespace std;

vector<int> Majorityelement(vector<int>& nums){
    int k = 3;
    sort(nums.begin(),nums.end());
    vector<int> ans;
    vector<int> index;
    int num = INT_MAX;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]!=num){
            int t = count(nums.begin(),nums.end(),nums[i]);
            ans.push_back(t);
            index.push_back(i);
            num = nums[i];
            
        }
    }
    vector<int> ans1;
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] > nums.size()/k)
         ans1.push_back(nums[index[i]]);
    }
    return ans1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    int ans1;
    vector <int> ans = Majorityelement(arr);
    // cout << ans.size();
    for(int i = 0; i < ans.size(); i++)
     cout << ans[i] << " ";

}