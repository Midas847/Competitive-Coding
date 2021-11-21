// https://leetcode.com/problems/maximum-difference-between-increasing-elements

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = 0;
        int maxDiff = INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(j > i && nums[j] > nums[i]){
                    cout<<j<<" "<<i<<"\n";
                    diff = nums[j]-nums[i];
                    maxDiff = max(maxDiff,diff);
                }
            }
        }
        if(!INT_MIN)
            return maxDiff;
        else
            return -1;
    }
};