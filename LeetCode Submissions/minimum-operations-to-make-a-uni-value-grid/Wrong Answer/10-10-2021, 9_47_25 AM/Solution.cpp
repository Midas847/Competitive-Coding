// https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid

class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                nums.push_back(grid[i][j]);
            }
        }
        int target = nums[m*n/2];
        int res = 0;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i]-target)%x!=0)
                return -1;
            else{
                res+=abs(nums[i]-target)/x;
            }
        }
        return res;
    }
};