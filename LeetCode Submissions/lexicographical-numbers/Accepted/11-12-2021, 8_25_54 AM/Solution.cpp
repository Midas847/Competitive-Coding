// https://leetcode.com/problems/lexicographical-numbers

class Solution {
public:
    vector<int> sol;
    void dfs(int i,int n){
        if(i > n)
            return;
        sol.push_back(i);
        dfs(i*10,n);
        if(i % 10 != 9)
            dfs(i+1,n);
    }
    vector<int> lexicalOrder(int n) {
        dfs(1,n);
        return sol;
    }
};