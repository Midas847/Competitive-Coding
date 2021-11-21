// https://leetcode.com/problems/number-of-pairs-of-interchangeable-rectangles

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<double,int> freq;
        long long ans = 0;
        for(int i=0;i<rectangles.size();i++){
            float x = (double)rectangles[i][0]/rectangles[i][1];
            ans+=freq[x];
            freq[x]++;
        }
        return ans;
    }
};