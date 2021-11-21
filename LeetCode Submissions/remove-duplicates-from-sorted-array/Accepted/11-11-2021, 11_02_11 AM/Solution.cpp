// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator ip;
        int n = nums.size();
        ip = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),ip));
        int c = 0;
        for(ip=nums.begin();ip!=nums.end();ip++)
            c++;
        return c;
    }
};