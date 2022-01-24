/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int minPrice = prices[0];
        int maxProfit = 0;

        for(unsigned int i = 1; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i]-minPrice);

        }
        return maxProfit;
    }
};
int main(){
  int n;
  cin>>n;
  vector<int> prices;
  for(int i=0;i<n;i++){
      int input;
      prices.push_back(input);
      cin>>input;
  }
  
  Solution ob;
  auto ans = ob.maxProfit(prices);
  cout<<ans<<endl;
  return 0;
}
