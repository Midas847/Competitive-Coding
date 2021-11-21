// https://leetcode.com/problems/unique-binary-search-trees

class Solution {
public:
    int numTrees(int n) {
        /*if(n==0) return 1;
        int count = 0;
        for(int i=1;i<=n;i++)
            count+=numTrees(i-1)*numTrees(n-i);
        return count;
        */
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i] += dp[j-1] * dp[i-j];
            }
        }
        return dp[n];
    }
};