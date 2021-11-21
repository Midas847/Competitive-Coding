// https://leetcode.com/problems/unique-paths-iii

class Solution {
public:
    int res = 0;
    int empty = 1;
    void dfs(vector<vector<int>>& grid,int x,int y,int count){
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y] == -1)
            return;
        if(grid[x][y] == 2){
            if(empty == count)
                res++;
            return;
        }
        grid[x][y] = -1;
        dfs(grid,x+1,y,count+1);
        dfs(grid,x,y+1,count+1);
        dfs(grid,x-1,y,count+1);
        dfs(grid,x,y-1,count+1);
        grid[x][y] = 0;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int startx = 0;
        int starty = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    startx = i;
                    starty = j;
                }
                else if(grid[i][j] == 0)
                    empty++;
            }
        }
        dfs(grid,startx,starty,0);
        return res;
    }
};