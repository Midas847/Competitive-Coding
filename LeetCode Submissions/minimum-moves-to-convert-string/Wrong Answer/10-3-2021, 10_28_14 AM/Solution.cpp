// https://leetcode.com/problems/minimum-moves-to-convert-string

class Solution {
public:
    int minimumMoves(string s) {
        int c = 0;
        for(int i=0;i<s.length();i+=3){
            int flag = 0;
            if(s[i]!='O'){
                for(int j=i;j<i+3 && j<s.length();j++){
                    if(s[j]=='X'){
                        flag = 1;
                    }
                }
                if(flag==1){
                    c++;
                    continue;
                }
            }
        }
        return c;
    }
};