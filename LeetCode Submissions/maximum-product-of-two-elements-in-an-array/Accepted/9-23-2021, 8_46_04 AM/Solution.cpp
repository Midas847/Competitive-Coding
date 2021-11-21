// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(!pq.empty()){
            //cout<<pq.top().first<<"\n";
            if(pq.size()==1)
                return pq.top().first;
            int x = pq.top().first;
            pq.pop();
            int y = pq.top().first;
            pq.pop();
            return((x-1)*(y-1));
        }
        return 0;
    }
};