// https://leetcode.com/problems/shifting-letters

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int x,shift=0;
        for(int i=shifts.size()-1;i>=0;i--){
            shift=(shift+shifts[i])%26;
            x = ((int)s[i]-97+shift)%26+97;
            s[i]=(char)x;
        }
        return s;
    }
};