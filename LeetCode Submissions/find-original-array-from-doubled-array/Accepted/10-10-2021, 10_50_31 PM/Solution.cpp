// https://leetcode.com/problems/find-original-array-from-doubled-array

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> v;
        vector<int> v1;
        if(n%2!=0)
            return v;
        sort(changed.begin(),changed.end());
        for(auto i = changed.begin();i != changed.end();i++){
            if(*i < 0)
                continue;
            auto it = lower_bound(i+1,changed.end(),(*i)*2);
            if(it != changed.end() && (*it)==(*i)*2){
                v1.push_back(*i);
                *it = -1;
            }
        }
        if(v1.size() == n/2)
            return v1;
        return {};
    }
};