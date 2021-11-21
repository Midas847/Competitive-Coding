// https://leetcode.com/problems/lexicographical-numbers

class Solution {
public:
    vector<string> sol;
    vector<int> ans;
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=n;i++)
            sol.push_back(to_string(i));
        sort(sol.begin(),sol.end());
        for(int i=0;i<sol.size();i++)
            ans.push_back(stoi(sol[i]));
        return ans;
    }
};