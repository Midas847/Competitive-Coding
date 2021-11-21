// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int dp[n+1];
        dp[0] = 0;
        for(int i=1;i<=n;i++){
            dp[i] = nums[i] + dp[i];
        }
        return dp[n];
    }
};