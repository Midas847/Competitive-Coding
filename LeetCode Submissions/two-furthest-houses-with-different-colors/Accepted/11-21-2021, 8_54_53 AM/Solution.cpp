// https://leetcode.com/problems/two-furthest-houses-with-different-colors

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxD = 0;
        for(int i=0;i<colors.size();i++){
            for(int j=0;j<colors.size();j++){
                if(colors[i]!=colors[j])
                    maxD = max(maxD,abs(i-j));
            }
        }
        return maxD;
    }
};