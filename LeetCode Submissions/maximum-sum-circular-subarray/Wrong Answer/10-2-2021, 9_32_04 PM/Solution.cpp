// https://leetcode.com/problems/maximum-sum-circular-subarray

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_so_far=INT_MIN;
        vector<int> arr(nums.size()*2);
        for(int i=0;i<nums.size();i++)
            arr[i] = nums[i];
        for(int i = nums.size();i<nums.size()*2;i++){
            arr[i] = nums[i-nums.size()];
        }
        int max_ending_here = 0;
        for(int i=0;i<arr.size();i++){
            max_ending_here = max_ending_here + arr[i];
            if(max_ending_here > max_so_far)
                max_so_far = max_ending_here;
            if(max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }
};