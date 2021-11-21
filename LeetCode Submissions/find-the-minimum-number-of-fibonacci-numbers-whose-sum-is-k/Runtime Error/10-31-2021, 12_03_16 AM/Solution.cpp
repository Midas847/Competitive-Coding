// https://leetcode.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> dp(k+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<k+1;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        int c = 0;
        for(int i=k;i>=0;i--){
            if(dp[i] <= k){
                k = k-dp[i];
                c++;
            }
            if(k == 0)
                break;
        }
        return c;
    }
};