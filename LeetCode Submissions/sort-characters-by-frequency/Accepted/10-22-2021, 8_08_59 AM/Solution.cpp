// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        int count[256] = {0};
        for(auto ch:s)
            ++count[ch];
        sort(s.begin(),s.end(),[&](char a,char b){
            return count[a] > count[b] || (count[a] == count[b] && b > a);
        });
        return s;
    }
};