// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(stoi(nums[i]));
            //cout<<v[i]<<" ";
        }
        sort(v.begin(),v.end(),greater<int>());
        string str = to_string(v[k-1]);
        return str;
    }
};