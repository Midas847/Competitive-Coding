// https://leetcode.com/problems/most-beautiful-item-for-each-query

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<int> v;
        for(int i=0;i<queries.size();i++){
            int f = 0;
            int maxe = 0;
            for(int j=0;j<items.size();j++){
                if(items[j][0] <= queries[i]){
                    f = 1;
                    maxe = max(maxe,items[j][1]);
                }
            }
            if(f == 0)
                v.push_back(0);
            else
                v.push_back(maxe);
        }
        return v;
    }
};