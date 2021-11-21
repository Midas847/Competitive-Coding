// https://leetcode.com/problems/perfect-squares

class Solution {
        public:
        int square(int n){
            int sqr_t = (int)sqrt(n);
            return(sqr_t*sqr_t == n);
        }
        int numSquares(int n) {
            while(n%4==0){
                n/=4;
            }
            if(n%8==7){
                return 4;
            }
            if(square(n))
                return 1;
            for(int i=1;i*i<=n;i++){
                if(square(n-i*i)){
                    return 2;
                }
            }
            return 3;
        }
};