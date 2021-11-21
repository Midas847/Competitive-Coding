// https://leetcode.com/problems/range-addition-ii

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()){
            return (m*n);
        }
        vector<int> a,b;
        for(int i=0;i<ops.size();i++){
            a.push_back(ops[i][0]);
            b.push_back(ops[i][1]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int count = a[0]*b[0];
        return count;
    }
};