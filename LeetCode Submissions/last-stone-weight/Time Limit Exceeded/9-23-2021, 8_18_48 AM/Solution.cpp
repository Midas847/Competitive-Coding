// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        if(pq.size()==1)
            return pq.top();
        else if(pq.size()==2){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x!=y && x>y){
                return x-y;
            }
            else
                return NULL;
        }
        while(pq.size()!=1){
            int x = pq.top();
            pq.pop();
            int y= pq.top();
            pq.pop();
            if(x!=y && x>y){
                x = x-y;
                pq.push(x);
            }
        }
        return pq.top();
    }
};