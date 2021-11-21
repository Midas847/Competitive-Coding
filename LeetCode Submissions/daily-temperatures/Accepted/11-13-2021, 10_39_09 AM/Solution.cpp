// https://leetcode.com/problems/daily-temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v(temperatures.size(),0);
        stack<int> s;
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                int prev = s.top();
                s.pop();
                v[prev] = i - prev;
            }
            s.push(i);
        }
        return v;
    }
};