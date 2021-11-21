// https://leetcode.com/problems/maximum-sum-circular-subarray

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int maxsoFar = nums[0];
        int maxTotal = nums[0];
        int minsoFar = nums[0];
        int minTotal = nums[0];
        int sum = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            maxsoFar = max(nums[i],nums[i]+maxsoFar);
            maxTotal = max(maxTotal,maxsoFar);
            
            minsoFar = min(nums[i],nums[i]+minsoFar);
            minTotal = min(minTotal,minsoFar);
            
            sum+=nums[i];
        }
        if(sum == minTotal) return maxTotal;
        return max(sum-minTotal,maxTotal);
    }
};