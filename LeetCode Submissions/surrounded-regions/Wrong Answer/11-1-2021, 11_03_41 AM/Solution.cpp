// https://leetcode.com/problems/surrounded-regions

class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& board){
        if(i<1 && j<1 && i>board.size()-2 && j>board[i].size()-1)
            return;
        if(i==1 && board[i-1][j]!='O')
            board[i][j] = 'X';
        if(i==board.size()-2 && board[i+1][j]!='O')
            board[i][j] = 'X';
        if(j==1 && board[i][j-1]!='O')
            board[i][j] = 'X';
        if(j==board[i].size()-2 && board[i][j+1]!='O')
            board[i][j] = 'X';
    }
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size()-1;i++){
            for(int j=0;j<board[i].size()-1;j++){
                dfs(i,j,board);
            }
        }
    }
};