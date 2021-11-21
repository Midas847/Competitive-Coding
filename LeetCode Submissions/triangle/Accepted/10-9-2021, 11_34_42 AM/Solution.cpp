// https://leetcode.com/problems/triangle

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> res(n, triangle[0][0]);
        for(int i = 1;i<n;i++){
            for(int j=i;j>=0;j--){
                if(j == 0){
                    res[j] += triangle[i][j]; 
                }
                else if(i == j){
                    res[j] = triangle[i][j] + res[j-1];
                }
                else{
                    res[j] = triangle[i][j] + min(res[j-1],res[j]);
                }
            }
        }
        return *min_element(res.begin(),res.end());
    }
};