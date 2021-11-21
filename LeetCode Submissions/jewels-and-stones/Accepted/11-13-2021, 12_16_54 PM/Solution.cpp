// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        for(int i=0;i<stones.size();i++){
            m[stones[i]]++;
        }
        int c = 0;
        for(int i=0;i<jewels.size();i++){
            c += m[jewels[i]];
        }
        return c;
    }
};