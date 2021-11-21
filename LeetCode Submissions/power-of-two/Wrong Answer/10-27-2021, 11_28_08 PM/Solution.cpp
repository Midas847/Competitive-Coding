// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 || n%2 == 0)
            return true;
        return false;
    }
};