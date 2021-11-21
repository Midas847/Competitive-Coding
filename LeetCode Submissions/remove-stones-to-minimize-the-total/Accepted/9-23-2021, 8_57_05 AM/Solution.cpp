// https://leetcode.com/problems/remove-stones-to-minimize-the-total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        for(int i=0;i<piles.size();i++)
            pq.push(piles[i]);
        while(!pq.empty()){
            if(k==0)
                break;
            int x = pq.top();
            //cout<<x<<" ";
            pq.pop();
            pq.push(x-floor(x/2));
            k--;
        }
        int sum = 0;
        while(!pq.empty()){
            sum+=pq.top();
            //cout<<pq.top()<<" ";
            pq.pop();
        }
        return sum;
    }
};