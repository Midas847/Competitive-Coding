// https://leetcode.com/problems/find-missing-observations

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        for(int i=0;i<rolls.size();i++)
            sum+=rolls[i];
        int m = rolls.size();
        int rem = (m+n)*mean - sum;
        vector<int> v;
        //cout<<rem<<"\n";
        while(rem >= 0 && n>0){
            int curr = rem/n;
            if(curr<=6){
                //cout<<curr<<" ";
                v.push_back(curr);
            }
            rem -= curr;
            n--;
        }
        return v;
    }
};