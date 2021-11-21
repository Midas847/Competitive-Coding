// https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> m;
        unordered_map<char,int> mp;
        for(int i=0;i<word1.length();i++){
            m[word1[i]]++;
        }
        for(int i=0;i<word2.length();i++){
            mp[word2[i]]++;
        }
        for(char i='a';i<='z';i++){
            if(abs(m[i]-mp[i]) > 3)
                return false;
        }
        return true;
    }
};