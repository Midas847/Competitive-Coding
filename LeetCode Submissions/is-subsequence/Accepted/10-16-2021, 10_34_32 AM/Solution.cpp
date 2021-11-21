// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        for(int i=0;i<t.length();i++){
            if(s[x]==t[i]){
                x++;  
                cout<<s[x]<<endl;
            }
        }
        cout<<x<<endl;
        if(x!=s.length())
            return false;
        else
            return true;
    }
};