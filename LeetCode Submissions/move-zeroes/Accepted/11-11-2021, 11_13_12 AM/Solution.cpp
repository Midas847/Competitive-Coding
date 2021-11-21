// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                nums[c++] = nums[i];
        }
        for(int i=c;i<nums.size();i++)
            nums[i] = 0;
    }
};