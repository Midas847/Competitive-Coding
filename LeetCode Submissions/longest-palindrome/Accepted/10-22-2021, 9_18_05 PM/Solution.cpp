// https://leetcode.com/problems/longest-palindrome

class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int count = 0;
        bool flag = false;
        for(auto x:m){
            if(x.second%2 == 0){
                count+=x.second;
            }
            else{
                flag = true;
                count += x.second - 1;
            }
        }
        if(flag)
            return count+1;
        return count;
    }
};