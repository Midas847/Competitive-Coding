// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    vector<int> getRow(int n) {
        int dp[n+1][n+1];
        for(int line = 0;line < n+1;line++){
            for(int i=0;i<=line;i++){
                if(line==i||i==0)
                    dp[line][i] = 1;
                else{
                    dp[line][i] = dp[line-1][i-1]+dp[line-1][i];
                }
            }
        }
        vector <int> trianglerow;
        for(int j=0;j<=n;j++){
            trianglerow.push_back(dp[n][j]);
        }
        return trianglerow;
    }
};