// https://leetcode.com/problems/kth-smallest-number-in-multiplication-table

class Solution {
public:
    bool Enough(int x,int m,int n,int k){
        int c = 0;
        for(int i=1;i<=m;i++){
            c += min(x/i, n);
        }
        return c>=k;
    }
    int findKthNumber(int m, int n, int k) {
        int low = 1;
        int high = m * n;
        while(low < high){
            int mid = low + (high - low)/2;
            if(!Enough(mid,m,n,k))
                low = mid+1;
            else
                high = mid;
        }
        return low;
    }
};