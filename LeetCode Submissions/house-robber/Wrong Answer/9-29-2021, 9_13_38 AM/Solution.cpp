// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1)
            return nums[0];
        int dp[n+1];
        dp[0] = nums[0];
        dp[1] = nums[1];
        for(int i=2;i<n;i++){
            if(i%2==0)
                dp[0] = max(dp[0],nums[i]+dp[0]);
            else
                dp[1] = max(dp[1],nums[i]+dp[1]);
        }
        return max(dp[0],dp[1]);
    }
};