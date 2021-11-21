// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0)
                v.push_back(nums[i]);
        nums = v;
        for(int i=nums.size();i<n;i++)
            nums.push_back(0);
    }
};