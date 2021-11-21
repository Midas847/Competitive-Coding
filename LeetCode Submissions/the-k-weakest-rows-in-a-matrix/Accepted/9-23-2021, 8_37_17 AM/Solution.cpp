// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> v;
        for(int i=0;i<mat.size();i++){
            int c = 0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            pq.push({c,i});
        }
        while(!pq.empty()){
            v.push_back(pq.top().second);
            if(v.size()==k)
                break;
            pq.pop();
        }
        return v;
    }
};