// https://leetcode.com/problems/two-best-non-overlapping-events

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        map<int,int> m;
        int size = events.size();
        int ans = 0;
        int maxs = 0;
        while(size--){
            auto it = m.upper_bound(events[size][1]);
            maxs = max(maxs,events[size][2]);
            m[events[size][0]] = maxs;
            if(it == m.end())
                ans = max(ans,maxs);
            else
                ans = max(ans,(*it).second + events[size][2]);
        }
        return ans;
    }
};