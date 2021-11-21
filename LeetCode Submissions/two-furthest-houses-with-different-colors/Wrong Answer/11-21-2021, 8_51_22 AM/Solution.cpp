// https://leetcode.com/problems/two-furthest-houses-with-different-colors

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int x = colors[0];
        for(int i=colors.size()-1;i>=0;i--){
            if(colors[i]!=x){
                return i;
            }
        }
        return 0;
    }
};