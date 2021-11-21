// https://leetcode.com/problems/break-a-palindrome

class Solution {
public:
    string breakPalindrome(string palindrome) {
       
        if(palindrome.length()==1)
            return "";
        string str = palindrome;
        int c = 0;
        for(int i=0;i<palindrome.length();i++){
            if(palindrome[i]!='a')
            {
                palindrome[i] = 'a';
                string w = palindrome;
                reverse(w.begin(),w.end());
                if(w==palindrome)
                    palindrome[i]=str[i];
                else{
                    c++;
                    break;
                }
            }
        }
        if(c==0)
            palindrome[palindrome.length()-1] = 'b'; 
        return palindrome;
    }
};