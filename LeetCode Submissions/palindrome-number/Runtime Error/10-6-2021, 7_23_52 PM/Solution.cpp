// https://leetcode.com/problems/palindrome-number

class Solution {
public:
    bool isPalindrome(int x) {
        int g = x;
        int s = 0;
        while(x > 0){
            int d = x%10;
            s = s*10+d;
            x/=10;
        }
        if(s==g)
            return true;
        return false;
    }
};