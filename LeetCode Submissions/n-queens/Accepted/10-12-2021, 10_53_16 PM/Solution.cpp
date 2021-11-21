// https://leetcode.com/problems/n-queens

class Solution {
public:
    bool is_safe(vector<string>&v,int row,int col)
    {
        for(int i=row-1;i>=0;i--)
        {
            if(v[i][col]=='Q')
            {
                return false;
            }
        }
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
        {
            if(v[i][j]=='Q')
            {
                return false;
            }
        }
         for(int i=row-1,j=col+1;i>=0&&j<v.size();i--,j++)
        {
            if(v[i][j]=='Q')
            {
                return false;
            }
        }
        return true;
    }
    void find(int n,vector<string>&v,vector<vector<string>>&ans,int row)
    {
        if(row==n)
        {
            ans.push_back(v);
            return ;
        }
        for(int col=0;col<n;col++)
        {
            if(is_safe(v,row,col))
            {
                v[row][col]='Q';
                find(n,v,ans,row+1);
                v[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>v(n,string(n,'.'));
        find(n,v,ans,0);
        return ans;
    }
};