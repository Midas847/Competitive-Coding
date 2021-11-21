// https://leetcode.com/problems/reveal-cards-in-increasing-order

class Solution {
public:
    deque<int> q;
    vector<int> res;
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        for(int i=0;i<deck.size()-1;i++)
            q.push_back(deck[i]);
        while(!q.empty()){
            res.push_back(q.front());
            q.pop_front();
            res.push_back(q.back());
            q.pop_back();
        }
        int x = res[res.size()-1];
        res.pop_back();
        res.push_back(deck[deck.size()-1]);
        res.push_back(x);
        return res;
    }
};