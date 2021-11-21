// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_so_far = nums[0];
        int max_ending_here = nums[0];
        int min_ending_here = nums[0];
        for(int i=1;i<nums.size();i++){
            int temp = max_ending_here;
            max_ending_here = max({temp*nums[i],nums[i],min_ending_here*nums[i]});
            min_ending_here = min({temp*nums[i],nums[i],min_ending_here*nums[i]});
            max_so_far = max(max_ending_here,max_so_far);
        }
        return max_so_far;
    }
};