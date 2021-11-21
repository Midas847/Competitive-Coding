// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target)
                v.push_back(i);
        }
        sort(v.begin(),v.end());
        if(v.size()==1)
        {
            v.push_back(v[0]);
        }
        if(v.size()!=0)
            return {v[0],v[v.size()-1]};
        return {-1,-1};
    }
};