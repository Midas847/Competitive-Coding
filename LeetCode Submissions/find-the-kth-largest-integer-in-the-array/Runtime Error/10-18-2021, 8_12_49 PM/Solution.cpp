// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        vector<long long int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(stoll(nums[i]));
            //cout<<v[i]<<" ";
        }
        sort(v.begin(),v.end(),greater<long long int>());
        string str = to_string(v[k-1]);
        return str;
    }
};