// https://leetcode.com/problems/number-of-substrings-with-only-1s

class Solution {
public:
    int numSub(string s) {
        long count = 0;
        long sum = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
                count++;
            else{
                sum += (count*(count+1))/2;
                count = 0;
            }
        }
        return (sum+(count*(count+1))/2)%1000000007;
    }
};