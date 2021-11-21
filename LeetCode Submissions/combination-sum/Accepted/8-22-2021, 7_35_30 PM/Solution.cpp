// https://leetcode.com/problems/combination-sum

class Solution {
public:
    void backtrack(vector<int> &ar, int sum, vector<vector<int>> &res, vector<int> &r, int i){
        if(sum==0)
        {
            res.push_back(r);
        }
        while(i < ar.size() && sum-ar[i]>=0){
            r.push_back(ar[i]);
            backtrack(ar, sum-ar[i],res,r,i);
            i++;
            r.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<vector<int>> res;
        vector<int> r;
        backtrack(candidates, target,res,r,0);
        return res;
    }
};