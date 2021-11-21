// https://leetcode.com/problems/max-area-of-island

class Solution {
public:
    int maxArea = 0;
    int area;
    void dfs(int i,int j,vector<vector<int>>& grid){
        if(i < 0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 0)
            return;
        grid[i][j] = 0;
        area++;
        dfs(i+1,j,grid);
        dfs(i,j+1,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    dfs(i,j,grid);
                    maxArea = max(maxArea,area);
                    area = 0;
                }
            }
        }
        return maxArea;
    }
};