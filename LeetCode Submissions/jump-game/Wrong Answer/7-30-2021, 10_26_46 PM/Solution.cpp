// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int x;
        for(int i=0;i<nums.size();i=i+nums[i]){
            x = i;
            if(nums[i]==0)
                break;
        }
        if(x>=nums[n-1])
            return true;
        else
            return false;
    }
};