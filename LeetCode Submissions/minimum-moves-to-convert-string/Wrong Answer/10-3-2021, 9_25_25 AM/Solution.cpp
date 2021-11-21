// https://leetcode.com/problems/minimum-moves-to-convert-string

class Solution {
public:
    int minimumMoves(string s) {
        int c = 0;
        int t = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='X'){
                t = i;
                break;
            }
        }
        for(int i=t;i<s.length();i+=3){
            int flag = 0;
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
        return c;
    }
};