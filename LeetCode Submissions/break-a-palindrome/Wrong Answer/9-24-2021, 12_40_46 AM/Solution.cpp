// https://leetcode.com/problems/break-a-palindrome

class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length()==1)
            return "";
        int c = 0;
        for(int i=0;i<palindrome.length();i++){
            if(palindrome[i]!='a')
            {
                palindrome[i] = 'a';
            }
            else{
                c++;
                break;
            }
        }
        if(c!=0)
            palindrome[palindrome.length()-1] = 'b'; 
        return palindrome;
    }
};