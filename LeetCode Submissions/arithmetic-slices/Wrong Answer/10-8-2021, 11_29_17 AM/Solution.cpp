// https://leetcode.com/problems/arithmetic-slices

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return 0;
        if(n<3)
            return 0;
        if(n==3)
            return 1;
        int dp[n];
        int c = 0;
        for(int i=1;i<n-1;i++){
            if(nums[i]-nums[i-1] == nums[i+1]-nums[i])
                c++;
        }
        return c+1;
    }
};