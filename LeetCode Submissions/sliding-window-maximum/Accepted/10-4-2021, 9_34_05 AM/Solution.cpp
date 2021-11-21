// https://leetcode.com/problems/sliding-window-maximum

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> qi(k);
        vector<int> v;
        int i;
        for(i=0;i<k;i++){
            while(!qi.empty() && nums[i] >= nums[qi.back()]){
                qi.pop_back();
            }
            qi.push_back(i);
        }
        for(;i<nums.size();++i){
            v.push_back(nums[qi.front()]);
            while(!qi.empty() && qi.front() <= i-k)
                qi.pop_front();
            while(!qi.empty() && nums[i] >= nums[qi.back()])
                qi.pop_back();
            qi.push_back(i);
        }
        v.push_back(nums[qi.front()]);
        return v;
    }
};