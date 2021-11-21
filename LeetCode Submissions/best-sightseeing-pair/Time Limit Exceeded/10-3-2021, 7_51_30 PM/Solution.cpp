// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxScore = INT_MIN;
        for(int i=0;i<values.size()-1;i++){
            for(int j=i+1;j<values.size();j++){
                int score = values[i] + values[j] + i - j;
                maxScore = max(maxScore,score);
            }
        }
        return maxScore;
    }
};