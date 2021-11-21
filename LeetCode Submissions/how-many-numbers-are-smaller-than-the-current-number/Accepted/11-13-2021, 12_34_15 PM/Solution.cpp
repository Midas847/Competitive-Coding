// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        map<int,int> m;
        vector<int> res = nums;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            m[nums[i]] = i;
        }
        for(int i=0;i<res.size();i++){
            //cout<<m[res[i]]<<" ";
            res[i] = m[res[i]];
        }
        return res;
    }
};