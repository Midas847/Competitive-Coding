// https://leetcode.com/problems/most-beautiful-item-for-each-query

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> res(queries.size());
        vector<vector<int>> qp;
        for(int i=0;i<queries.size();i++)
            qp.push_back({queries[i],i});
        int maxBeauty = 0;
        sort(qp.begin(),qp.end());
        sort(items.begin(),items.end());
        for(int i=0;i<queries.size();i++){
            int m = qp[i][0];
            int n = qp[i][1];
            int itemIndex = 0;
            while(itemIndex < items.size() && items[itemIndex][0] <= m){
                maxBeauty = max(maxBeauty,items[itemIndex][1]);
                itemIndex++;
            }
            res[n] = maxBeauty;
        }
        return res;
    }
};