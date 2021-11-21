// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        vector<int> v;
        for(auto x:m)
            v.push_back(x.second);
        sort(v.begin(),v.end());
        if(v.size() == 1)
            return true;
        if(v[0] == v[v.size()-1])
            return true;
        return false;
    }
};