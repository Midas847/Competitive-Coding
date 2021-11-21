// https://leetcode.com/problems/minimum-moves-to-convert-string

class Solution {
public:
    int minimumMoves(string s) {
        int c = 0;
        for(int i=0;i<s.length();i=i){
            if(s[i]=='X'){
                c++;
                i+=3;
            }
            else{
                i++;
            }
        }
        return c;
    }
};