// https://leetcode.com/problems/sum-of-square-numbers

class Solution {
public:
    bool judgeSquareSum(int c) {
        int n= sqrt(c),x,y;
        for(int i=0;i<=n;i++){
                x=c-i*i;
                y=sqrt(x);
                if(y*y==x)return true;
        }
        return false;
    }
};