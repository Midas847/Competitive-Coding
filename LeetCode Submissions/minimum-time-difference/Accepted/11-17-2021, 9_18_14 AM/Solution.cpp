// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int diff = 1440;
        vector<int> v(timePoints.size(),0);
        for(int i=0;i<timePoints.size();i++)
            v[i] = stoi(timePoints[i].substr(0,2)) * 60 + stoi(timePoints[i].substr(3,2));
        sort(v.begin(),v.end());
        v.push_back(v[0] + diff);
        for(int i=1;i<v.size();i++){
            diff = min(diff,v[i]-v[i-1]);
        }
        return diff;
    }
};