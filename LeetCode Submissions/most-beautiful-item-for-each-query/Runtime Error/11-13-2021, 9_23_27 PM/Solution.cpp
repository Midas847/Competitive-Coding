// https://leetcode.com/problems/most-beautiful-item-for-each-query

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        map<int,int> m;
        for(int i=0;i<items.size();i++){
            m[items[i][0]]  = items[i][1];
        }
        vector<int> v;
        for(int i=0;i<queries.size();i++){
            int f = 0;
            int maxe = 0;
            /*for(int j=0;j<items.size();j++){
                if(items[j][0] <= queries[i]){
                    f = 1;
                    maxe = max(maxe,items[j][1]);
                }
            }*/
            /*for(auto x:m){
                if(x.first <= queries[i]){
                    f = 1;
                    maxe = max(maxe,x.second);
                }
            }
            
            if(f == 0)
                v.push_back(0);
            else
                v.push_back(maxe);*/
            int j = i;
            while(m[queries[j]] == 0){
                j--;
            }
            v.push_back(m[queries[j]]);
        }
        return v;
    }
};