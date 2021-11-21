// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxindex = nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxindex>=i)
                maxindex = max(maxindex,i+nums[i]);
        }
        if(maxindex>=nums.size()-1)
            return true;
        return false;
    }
};