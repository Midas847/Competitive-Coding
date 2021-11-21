// https://leetcode.com/problems/find-missing-observations

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0;
        for(int i=0;i<rolls.size();i++)
            sum+=rolls[i];
        int m = rolls.size();
        int rem = (m+n)*mean - sum;
        int re = rem;
        int r = n;
        vector<int> v;
        cout<<rem<<"\n";
        while(rem >= 0 && n>0){
            int curr = rem/n;
            if(curr>=1 && curr<=6){
                //cout<<curr<<" ";
                v.push_back(curr);
            }
            rem -= curr;
            n--;
        }
        int s = 0;
        for(int i=0;i<v.size();i++){
            s+=v[i];
        }
        if(v.size()==r && s==re){
            return v;
        }
        vector<int> v1;
        return v1;
    }
};