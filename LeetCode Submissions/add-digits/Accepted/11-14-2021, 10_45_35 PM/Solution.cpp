// https://leetcode.com/problems/add-digits

class Solution {
public:
    int addDigits(int num) {
        int n = num;
        while(n > 9){
            int s = 0;
            while(n > 0){
                int d = n%10;
                s += d;
                n /= 10;
            }
            n = s;
        }
        return n;
    }
};