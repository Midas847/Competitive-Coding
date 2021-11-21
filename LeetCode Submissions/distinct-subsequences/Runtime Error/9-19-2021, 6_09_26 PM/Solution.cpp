// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.length(), m = t.length();
         vector<int> dp(m+1, 0);
         dp[0] = 1;
         for (int j = 1; j <= n; j++){
             for (int i = m; i >= 1; i--){
                 dp[i] += s[j-1] == t[i-1] ? dp[i-1] : 0;
             }
         }
        return dp[m];
    }
};