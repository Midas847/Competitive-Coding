// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        //bool flag = true;
        for(int i=1;i<prices.size();i=i)
        {
            if(prices[i]>prices[i-1]){
                profit += prices[i]-prices[i-1];
                i+=2;
            }
            i++;
        }
        return profit;
        
    }
};