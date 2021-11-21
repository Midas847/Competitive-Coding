// https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        if(nums.size()==1)
            return nums[0];
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++)
            pq.push(stoi(nums[i]));
        while(pq.size()!=0){
            //cout<<pq.top()<<" ";
            k--;
            if(k==0)
                return to_string(pq.top());
            pq.pop();
        }
        return to_string(0);
    }
};