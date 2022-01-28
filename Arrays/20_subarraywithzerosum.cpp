/*Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> st;
        int psum=0;
        for(int i=0;i<n;i++){
            psum = psum+arr[i];
            if(psum==0){
                return true;
            }
            if(st.find(psum)!=st.end()){
                return true;
            }else{
                st.insert(psum);
            }
            
            
        }
        return false;
    }
};

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	
	return 0;
}  