/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

LeetCode Problem-287*/

/*Approach: Floyd's Tortoise and Hare (Cycle Detection)*/

//Function

 int findDuplicate(vector<int>& nums) {
        //Find the intersection of the two runners
        int small = nums[0];
        int fast  = nums[0];
        
        do{
            small = nums[small];
            fast  = nums[nums[fast]];
        }while(small!=fast);
        //Find the entrance to the cycle
        fast = nums[0];
        while(small!=fast)
        {
            small = nums[small];
            fast  = nums[fast];
        }
        return small;
    }
