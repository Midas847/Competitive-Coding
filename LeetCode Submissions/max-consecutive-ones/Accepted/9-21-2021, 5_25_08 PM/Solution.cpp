// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_final = 0;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
                max_final = max(max_final,c);
            }
            else{
                c = 0;
            }
        }
        return max_final;
    }
};