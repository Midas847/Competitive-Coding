// https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int gridSum = 0;
        vector<int> v;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                gridSum+=grid[i][j];
                v.push_back(grid[i][j]*grid.size()*grid.size());
            }
        }
        int minSum = INT_MAX;
        int res = 0;
        for(int i=0;i<v.size();i++){
            if(abs(v[i]-gridSum) < minSum){
                minSum = abs(v[i]-gridSum);
                res = v[i];
            }
        }
        cout<<res<<"\n";
        int m  = res/(grid.size()*grid.size());
        int c = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(abs(grid[i][j]-m)%x==0){
                    c+=abs(grid[i][j]-m)/x;
                }
            }
        }
        if(c!=1)
            return c;
        return -1;
    }
};