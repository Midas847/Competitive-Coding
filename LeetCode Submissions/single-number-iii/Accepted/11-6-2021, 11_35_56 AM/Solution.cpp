// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto x:m){
            if(x.second == 1)
                v.push_back(x.first);
        }
        return v;
    }
};