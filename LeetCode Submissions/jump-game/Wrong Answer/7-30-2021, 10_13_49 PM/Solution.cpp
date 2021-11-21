// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int x;
        if(nums[0]==0&&n==1)
            return true;
        for(int i=0;i<nums.size();i=i+nums[i]){
            x = nums[i];
            if(x==0)
                return false;
        }
        if(x==nums[n-1])
            return true;
        else
            return false;
    }
};