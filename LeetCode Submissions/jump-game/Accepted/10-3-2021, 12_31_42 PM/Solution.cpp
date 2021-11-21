// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int dp = nums[0];
        for(int i=1;i<n;i++){
            if(dp >= i)
                dp = max(dp,i+nums[i]);
            cout<<dp<<" ";
        }
        if(dp >= n-1)
            return true;
        else
            return false;
    }
};