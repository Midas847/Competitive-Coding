// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        int nums[n+1];
        nums[0] = 0;
        nums[1] = 1;
        for(int i=1;i <= n/2;i++){
           nums[2*i] = nums[i];
           if((2*i+1)<=n)
               nums[2*i+1] = nums[i] + nums[i+1];
        }
        for(int i=0;i<=n;i++){
            cout<<nums[i]<<endl;
        }
        return *max_element(nums, nums+n);
    }
};