// https://leetcode.com/problems/number-of-substrings-with-only-1s

class Solution {
public:
    int numSub(string s) {
        //cout << (int)((float)3/(float)2 * 4);
        int c = 0;
        int count = 0;
        s = s+'0';
        for(int i=0;i<s.length();i++){
            if(s[i] == '1')
                c++;
            else{
                if(c!=0){
                    cout<<c<<" ";
                    count += (c+1)*c/2;
                }
                c = 0;
            } 
        }
        return count;
    }
};