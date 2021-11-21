// https://leetcode.com/problems/shifting-letters

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        reverse(shifts.begin(),shifts.end());
        vector<int> prefix(shifts.size());
        prefix[0]=shifts[0];
        for(int i=1;i<shifts.size();i++){
            prefix[i]=prefix[i-1]+shifts[i];
            if(prefix[i]>=26){
                prefix[i]=prefix[i]-26;
            }
        }
        string str;
        reverse(prefix.begin(),prefix.end());
        for(int i=0;i<s.size();i++){
            //cout<<char(prefix[i]+s[i]);<<" ";
            str+=char(prefix[i]+s[i]);
        }
        return str;
    }
};