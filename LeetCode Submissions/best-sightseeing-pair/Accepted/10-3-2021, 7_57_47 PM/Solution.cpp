// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = INT_MIN;
        int base = values[0] + 0;
        for(int i=1;i<values.size();i++){
            maxScore = max(maxScore,base+values[i]-i);
            base = max(base,values[i]+i);
        }
        return maxScore;
    }
};