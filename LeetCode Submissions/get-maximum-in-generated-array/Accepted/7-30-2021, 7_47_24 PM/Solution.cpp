// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)return 0;
        int maxval=1;
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=1;i<=n/2;i++){
            dp[2*i]=dp[i];
            maxval=max(maxval,dp[2*i]);
            if(2*i+1<=n){
                dp[2*i+1]=dp[i]+dp[i+1];
                maxval=max(maxval,dp[2*i+1]);
            }
        }
        return maxval;
    }
};
