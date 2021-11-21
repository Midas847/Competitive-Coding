// https://leetcode.com/problems/bitwise-and-of-numbers-range

class Solution {
public:
    int rangeBitwiseAnd(int x, int y) {
        return(y > x) ? (rangeBitwiseAnd(x/2,y/2) << 1) : y;
    }

};