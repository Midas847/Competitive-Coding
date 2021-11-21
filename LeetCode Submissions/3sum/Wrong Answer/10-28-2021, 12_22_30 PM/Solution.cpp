// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        if(nums.size() == 0)
            return {};
        for(int i=0;i<nums.size()-1;i++){
            int left = i+1;
            int right = nums.size()-1;
            int x = nums[i];
            while(left < right){
                if(x + nums[left] + nums[right] == 0)
                {
                    vector<int> row;
                    row.push_back(x);
                    row.push_back(nums[left]);
                    row.push_back(nums[right]);
                    res.push_back(row);
                    //cout<<x<<" "<<nums[left]<<" "<<nums[right]<<"\n";
                    left++;
                    right--;
                    break;
                }
                else if(x + nums[left] + nums[right] == 0){
                    left++;
                }
                else
                    right--;
            }
        }
        return res;
    }
};