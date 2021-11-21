// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        for(int i = 1;i<=x/i;i++){
            if(i <= x/i && (i+1) > x/(i+1))
                return i;
        }
        return -1;
    }
};