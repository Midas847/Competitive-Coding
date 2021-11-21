// https://leetcode.com/problems/stone-game

class Solution {
public:
    template<typename T>
    void pop_front(std::vector<T> &v)
    {
        if (v.size() > 0) {
            v.erase(v.end());
        }
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int sum = 0;
        int sum1 = 0;
        for(int i=0;i<n/2;i++){
            if(piles.back()>=piles.front())
            {
                sum+=piles.back();
                sum1+=piles.front();
                piles.pop_back();
            }
            else if(piles.front()>=piles.back())
            {
                sum+=piles.front();
                sum1+=piles.back();
                piles.erase(piles.begin());
            }
        }
        return(sum>sum1);
    }
};