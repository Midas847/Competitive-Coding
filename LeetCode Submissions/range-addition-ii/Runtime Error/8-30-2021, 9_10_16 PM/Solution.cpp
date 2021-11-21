// https://leetcode.com/problems/range-addition-ii

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        sort(ops.begin(),ops.end());
        /*for(int i =0 ;i<ops.size();i++){
            //cout<<ops[i][0]<<" "<<ops[i][1]<<"\n";
            int maxel = ops.size();
            
        }*/
        int maxel = ops.size();
        int count;
        count = ops[0][0]+ops[0][1];
        if(!ops.empty())
            return count;
        else
            return (m*n);
    }
};