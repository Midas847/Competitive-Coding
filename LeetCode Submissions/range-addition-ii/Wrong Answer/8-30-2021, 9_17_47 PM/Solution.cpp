// https://leetcode.com/problems/range-addition-ii

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()){
            return (m*n);
        }
        if(m==1&&n==1){
            return 1;
        }

            sort(ops.begin(),ops.end());
            /*for(int i =0 ;i<ops.size();i++){
                //cout<<ops[i][0]<<" "<<ops[i][1]<<"\n";
                int maxel = ops.size();

            }*/
            int maxel = ops.size();
            int count;
            if(ops[0][0]==1&&ops[0][1]==1)
                count = 1;
            else
                count = ops[0][0]*ops[0][1];
            return count;

    }
};