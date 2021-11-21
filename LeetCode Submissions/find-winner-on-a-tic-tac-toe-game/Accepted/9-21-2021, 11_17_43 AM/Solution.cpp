// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> v;
        for(int i=0;i<3;i++){
            vector<int> x;
            for(int j=0;j<3;j++){
                x.push_back(0);
            }
            v.push_back(x);
        }
        for(int i=0;i<moves.size();i++){
            if(i%2==0){
                v[moves[i][0]][moves[i][1]] = 1;
                //cout<<moves[i][0]<<moves[i][1]<<"\n";
            }
            else{
                v[moves[i][0]][moves[i][1]] = -1;
                //cout<<moves[i][0]<<moves[i][1]<<"\n";
            }
        }
        if(v[0][0]==1 && v[1][1]==1 && v[2][2]==1){
            return "A";
        }
        else if(v[0][1]==1 && v[1][1]==1 && v[2][1]==1){
            return "A";
        }
        else if(v[0][2]==1 && v[1][1]==1 && v[2][0]==1){
            return "A";
        }
        else if(v[1][0]==1 && v[1][1]==1 && v[1][2]==1){
            return "A";
        }
        else if(v[0][0]==1 && v[0][1]==1 && v[0][2]==1){
            return "A";
        }
        else if(v[0][2]==1 && v[1][2]==1 && v[2][2]==1){
            return "A";
        }
        else if(v[2][0]==1 && v[2][1]==1 && v[2][2]==1){
            return "A";
        }
        else if(v[0][0]==1 && v[1][0]==1 && v[2][0]==1){
            return "A";
        }
        
        else if(v[0][0]==-1 && v[1][1]==-1 && v[2][2]==-1){
            return "B";
        }
        else if(v[0][1]==-1 && v[1][1]==-1 && v[2][1]==-1){
            return "B";
        }
        else if(v[0][2]==-1 && v[1][1]==-1 && v[2][0]==-1){
            return "B";
        }
        else if(v[1][0]==-1 && v[1][1]==-1 && v[1][2]==-1){
            return "B";
        }
        else if(v[0][0]==-1 && v[0][1]==-1 && v[0][2]==-1){
            return "B";
        }
        else if(v[0][2]==-1 && v[1][2]==-1 && v[2][2]==-1){
            return "B";
        }
        else if(v[2][0]==-1 && v[2][1]==-1 && v[2][2]==-1){
            return "B";
        }
        else if(v[0][0]==-1 && v[1][0]==-1 && v[2][0]==-1){
            return "B";
        }
        else if(moves.size()==9){
            return "Draw";
        }
        else
            return "Pending";
    }
};