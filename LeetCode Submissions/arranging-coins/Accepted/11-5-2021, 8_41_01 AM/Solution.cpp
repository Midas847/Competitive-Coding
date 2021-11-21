// https://leetcode.com/problems/arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
        long long int c = 0;
        long long int s = 0;
        for(long long int i=1;i<=n;i++){
            s += i;
            //cout<<s<<" ";
            if(s<=n){
                c++;
            }
            else if(s > n){
                break;
            }
        }
        return c;
    }
};