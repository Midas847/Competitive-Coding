// https://leetcode.com/problems/rotting-oranges

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int fresh = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j] == 1)
                    fresh++;
            }
        }
        int c = 0;
        while(!q.empty()){
            int siz = q.size();
            bool f = false;
            while(siz--){
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                if(a > 0 && grid[a-1][b]==1){
                    q.push({a-1,b});
                    grid[a-1][b] = 2; 
                    f = true;
                    fresh--;
                }
                if(a < grid.size()-1 && grid[a+1][b]==1){
                    q.push({a+1,b});
                    grid[a+1][b] = 2; 
                    f = true;
                    fresh--;
                }  
                if(b > 0 && grid[a][b-1] == 1){
                    q.push({a,b-1});
                    grid[a][b-1] = 2; 
                    f = true;
                    fresh--;
                }
                if(b < grid[0].size()-1 && grid[a][b+1] == 1){
                    q.push({a,b+1});
                    grid[a][b+1] = 2; 
                    f = true;
                    fresh--;
                }
            }
            if(f == true)
                c++;
        }
        if(fresh!=0)
            return -1;
        return c;
    }
};