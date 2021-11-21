// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<pair<int,int>> v;
        for(int i=0;i<timePoints.size();i++){
            int a = stoi(timePoints[i].substr(0,2));
            int b = stoi(timePoints[i].substr(3));
            if(a == 0)
                a += 24;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int minDiff = INT_MAX;
        int diff = 0;
        for(int i=1;i<v.size();i++){
            //cout<<v[i].first<<" "<<v[i].second<<"\n";
            int x = v[i].first*60;
            int y = v[i-1].first*60;
            diff = abs((x + v[i].second) - (y+v[i-1].second));
            minDiff = min(minDiff,diff);
        }
        return minDiff;
    }
};