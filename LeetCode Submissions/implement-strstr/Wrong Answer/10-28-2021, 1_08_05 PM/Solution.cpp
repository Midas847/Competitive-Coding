// https://leetcode.com/problems/implement-strstr

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()==0 && needle.length() == 0)
            return 0;
        if(haystack.length()==0 || needle.length() == 0)
            return -1;
        for(int i=0;i<haystack.length();i++){
            if(needle[0] == haystack[i])
                return i;
        }
        return -1;
    }
};