// https://leetcode.com/problems/daily-temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> v;
        for(int i=0;i<temperatures.size();i++){
            int flag = 0;
            for(int j=i;j<temperatures.size();j++){
                if(temperatures[j] > temperatures[i]){
                    flag = 1;
                    v.push_back(j-i);
                    break;   
                }
            }
            if(flag == 0)
                v.push_back(0);
        }
        return v;
    }
};