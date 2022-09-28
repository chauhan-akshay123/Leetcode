/*
---LINK--- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/
 int maxProfit(vector<int>& prices) {
    int n=prices.size(),min_so=prices[0],max_profit=0;
    for(int i=0; i<n; i++){
        min_so = min(min_so,prices[i]);
        max_profit=max(max_profit,prices[i]-min_so);
    }    
    return max_profit;    
    }
