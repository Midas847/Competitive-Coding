// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        string str1 = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                str += s[i];
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] >= 'a' && s[i] <= 'z')
                str1 += s[i];
        }
        cout<<str<<"\n"<<str1<<"\n";
        if(str == str1)
            return true;
        return false;
    }
};