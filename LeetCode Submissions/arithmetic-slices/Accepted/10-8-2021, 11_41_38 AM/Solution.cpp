// https://leetcode.com/problems/arithmetic-slices

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res = 0;
        for(int i=2,j=1;i<nums.size();i++){
            if(nums[i] - nums[i-1]!=nums[j]-nums[j-1])
                j = i;
            res+=(i-j);
        }
        return res;
    }
};