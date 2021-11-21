// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_price = 0;
        for(int i=0;i<prices.size();i++){
            for(int j=i;j<prices.size();j++){
                if(prices[j]-prices[i] >= max_price){
                    max_price = prices[j] - prices[i];
                }
            }
        }
        return max_price;
    }
};