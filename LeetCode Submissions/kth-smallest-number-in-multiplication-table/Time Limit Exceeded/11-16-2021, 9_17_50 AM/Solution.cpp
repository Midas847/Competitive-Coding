// https://leetcode.com/problems/kth-smallest-number-in-multiplication-table

class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        vector<int> v;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                v.push_back(i * j);
            }
        }
        sort(v.begin(),v.end());
        return v[k-1];
    }
};