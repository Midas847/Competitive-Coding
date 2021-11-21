// https://leetcode.com/problems/house-robber

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        int dp[n+1];
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = max(dp[0]+nums[2],dp[1]);
        for(int i=3;i<n;i++){
            dp[i] = max(nums[i]+dp[i-2],nums[i]+dp[i-3]);
        }
        return max(dp[n-1],dp[n-2]);
    }
};