// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> v;
        unordered_map<int,vector<int>> m;
        for(int i=0;i<g.size();i++){
            m[g[i]].push_back(i);
            if(m[g[i]].size() == g[i]){
                v.push_back(m[g[i]]);
                m[g[i]].clear();
            }
        }
        return v;
    }
};