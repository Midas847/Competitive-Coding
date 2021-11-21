// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        int res = 0;
        while(x != 0){
            int d = x%10;
            x /= 10;
            if(res > INT_MAX/10 || (res == INT_MAX/10 && d > 7)) 
                return 0;
            if(res < INT_MIN/10 || (res == INT_MIN/10 && d < -8))
                return 0;
            res = res * 10 + d;
        }
        return res;
    }
};