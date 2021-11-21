// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
            return 0;
        int nums[n+1];
        nums[0] = 0;
        nums[1] = 1;
        int themax = 1;
        for(int i=1;i <= n/2;i++){
           nums[2*i] = nums[i];
           themax = max(themax,nums[2*i]);
           if((2*i+1)<=n)
               nums[2*i+1] = nums[i] + nums[i+1];
               themax = max(themax,nums[2*i+1]);
        }
        for(int i=0;i<=n;i++){
            cout<<nums[i]<<endl;
            
        }
        return themax;
    }
};