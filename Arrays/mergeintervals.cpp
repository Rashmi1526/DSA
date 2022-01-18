/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].*/


//Calling function only
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) 
    {
        sort(v.begin(), v.end());		
        int start = v[0][0];
        int end = v[0][1];        
		vector<vector<int>> ans;
        
		for(int i=1;i<v.size();i++)
        {
            if(v[i][0] > end)
            {
                ans.push_back({start, end});
                start = v[i][0];
                end = v[i][1];
            }
            else if(v[i][0] <= end)
            {
                end = max(end, v[i][1]);
            }
        }
        ans.push_back({start, end});
        return ans;
    }
    
};