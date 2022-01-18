/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]*/

//function
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int i, j;
        int n= nums.size();
        int a=0;
        for(i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0)
            reverse(nums.begin(), nums.end());
        else{
            for(j=n-1; j>=0; j--){
                if(nums[i]<nums[j]){
                    break;
                }
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin()+i+1, nums.end());
        }        
    }
};