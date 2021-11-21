// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(m[i] == 0)
                v.push_back(i);
        }
        return v;
    }
};