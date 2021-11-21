// https://leetcode.com/problems/unique-binary-search-trees

class Solution {
public:
    int numTrees(int n) {
        if(n==0) return 1;
        int count = 0;
        for(int i=1;i<=n;i++)
            count+=numTrees(i-1)*numTrees(n-i);
        return count;
    }
};