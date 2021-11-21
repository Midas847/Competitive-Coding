// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
            return 0;
        vector<int> nums(n+1,0);
        nums[0] = 0;
        nums[1] = 1;
        int maxval = 1;
        for(int i=1;i <= n/2;i++){
           nums[2*i] = nums[i];
           maxval = max(maxval,nums[2*i]);
           if((2*i+1)<=n){
               nums[2*i+1] = nums[i] + nums[i+1];
               maxval = max(maxval,nums[2*i+1]);
           }
        }
        return maxval;
    }
};
