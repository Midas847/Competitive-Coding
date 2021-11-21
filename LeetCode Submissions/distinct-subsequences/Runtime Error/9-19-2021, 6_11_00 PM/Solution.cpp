// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    int numDistinct(string s, string t) {
        int tLen = t.size();
    vector<int> prefixVec(tLen,0);
    for (auto c: s)
        for (int i = tLen-1;i >= 0;--i)
            if (t[i] == c)
                prefixVec[i] = (i > 0 ? prefixVec[i-1] : 1) + prefixVec[i];
    return prefixVec.back();
    }
};