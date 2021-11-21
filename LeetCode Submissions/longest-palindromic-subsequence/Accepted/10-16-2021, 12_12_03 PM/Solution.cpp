// https://leetcode.com/problems/longest-palindromic-subsequence

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        int dp[n][n];
        int i,j,cl;
        for(i=0;i<n;i++){
            dp[i][i] = 1;
        }
        for(cl = 2;cl<=n;cl++){
            for(i=0;i<n-cl+1;i++){
                j = i+cl-1;
                if(s[i]==s[j] && cl==2)
                    dp[i][j] = 2;
                else if(s[i]==s[j])
                    dp[i][j] = dp[i+1][j-1]+2;
                else
                    dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
            }
        }
        return dp[0][n-1];
    }
};