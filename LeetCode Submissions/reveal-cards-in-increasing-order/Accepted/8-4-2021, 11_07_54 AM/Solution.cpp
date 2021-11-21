// https://leetcode.com/problems/reveal-cards-in-increasing-order

class Solution {
public:
    queue<int> q;
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> res(n);
        sort(deck.begin(),deck.end());
        for(int i=0;i<deck.size();i++)
            q.push(i);
        int j = 0;

        while(!q.empty()){
            res[q.front()] = deck[j];
            q.pop();
            int f = q.front();
            q.pop();
            q.push(f);
            j++;
        }
        return res;
    }
};