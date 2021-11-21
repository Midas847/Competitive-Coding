// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int n) {
        int dp[n][n];
        vector<vector<int>> triangle;
        for(int line = 0;line<n;line++){
            vector<int> row;
            for(int i = 0;i<=line;i++){
                if(line==i||i==0)
                    dp[line][i] = 1;
                else{
                    dp[line][i] = dp[line-1][i-1] + dp[line-1][i];
                }
                
                row.push_back(dp[line][i]);
            }
                triangle.push_back(row);
        }
        return triangle;
    }
};