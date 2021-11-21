// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        string word;
        stringstream iss(s);
        string str;
        while (iss >> word)
            str = word +  " " +str;
        string str1;
        for(int i=0;i<str.length()-1;i++){
            str1 += str[i];
        }
        return str1;
    }
};