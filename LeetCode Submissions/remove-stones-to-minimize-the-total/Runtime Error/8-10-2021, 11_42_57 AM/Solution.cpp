// https://leetcode.com/problems/remove-stones-to-minimize-the-total

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        vector<int>v;
        vector<pair<int,int>> A;
        for(int i=0;i<piles.size();i++){
            int x = floor(piles[i] / 2);
            A.push_back(make_pair(x,piles[i]));
        }
        sort(A.begin(),A.end());
        int sum = 0;
        for(int i=A.size()-1;i>=A.size()-k;i--){
            cout<<A[i].first<<" "<<A[i].second<<endl;
            sum+=A[i].second-A[i].first;
        }
        for(int i=0;i<A.size()-k;i++){
            sum+=A[i].second;
        }
        return sum;
    }
};