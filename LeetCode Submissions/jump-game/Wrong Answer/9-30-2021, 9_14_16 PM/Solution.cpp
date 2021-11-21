// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,0);
        dp[0] = nums[0];
        if(n==1)
            return true;
        for(int i=1;i<=n;i++){
            dp[i] = i + dp[i-1];
            //cout<<dp[i]<<" ";
            if(dp[i]>=n)
                return true;
        }
        return false;
    }
};