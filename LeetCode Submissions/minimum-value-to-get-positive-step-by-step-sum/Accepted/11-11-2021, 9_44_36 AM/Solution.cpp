// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minVal = 0;
        int sum = 0;
        for(int x:nums){
            sum += x;
            minVal = min(minVal,sum);
        }
        return -minVal+1;
    }
};