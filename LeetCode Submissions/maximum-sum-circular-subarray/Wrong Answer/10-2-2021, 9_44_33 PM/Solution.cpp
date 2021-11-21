// https://leetcode.com/problems/maximum-sum-circular-subarray

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_so_far=INT_MIN;
        int max_ending_here = 0;
        for(int i=0;i<nums.size();i++){
            max_ending_here = max_ending_here + nums[i];
            if(max_ending_here > max_so_far)
                max_so_far = max_ending_here;
            if(max_ending_here < 0)
                max_ending_here = 0;
        }
        
        int min_so_far=INT_MAX;
        int min_ending_here = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(min_ending_here > 0)
                min_ending_here = nums[i];
            else
                min_ending_here += nums[i];
            min_so_far = min(min_so_far, min_ending_here);
        }
        return abs(min_so_far)+max_so_far;
    }
};