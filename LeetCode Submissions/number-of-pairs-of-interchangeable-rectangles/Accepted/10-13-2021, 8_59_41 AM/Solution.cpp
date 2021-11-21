// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:   
    
    long long interchangeableRectangles(vector<vector<int>>& rec) {
        long long ans=0;
        map<double,int>mp;
        for(auto i:rec)
        {
            double temp=(double)i[0]/i[1];
            ans+=mp[temp];
            mp[temp]++;
        }
        return ans;
    }
};