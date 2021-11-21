// https://leetcode.com/problems/arithmetic-slices

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n= nums.size();
        if(n<3)
            return 0;
        int ans = 0;
        int curr = 0;
        int lastDiff = nums[1] - nums[0];
        int currDiff = 0;
        for(int i =1;i<n-1;i++){
            currDiff = nums[i+1]-nums[i];
            if(currDiff==lastDiff)
                curr++;
            if(currDiff!=lastDiff){
                curr = 0;
                lastDiff = currDiff;
            }
            ans+=curr;
        }
        return ans;
    }
};