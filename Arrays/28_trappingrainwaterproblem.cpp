/*Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10*/

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int> left,right;
       long long sum=0;
       int maxR = INT_MIN;
       int maxL = INT_MIN;
       for(int i =0;i<n;i++){
           
                 maxL = max(maxL,arr[i]);
                 left.push_back(maxL);
             
         
                 maxR = max(maxR,arr[n-1-i]);
                 right.push_back(maxR);
            
       }
       reverse(right.begin(),right.end());
       
       for(int i=0;i<n;i++){
           int temp = min(left[i],right[i]);
           sum +=  temp - arr[i];
       }
       return sum;
   


    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends