// https://leetcode.com/problems/hamming-distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int m = x^y;
        string s = bitset<32> (m).to_string();
        int c = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
                c++;
        }
        return c;
    }
};