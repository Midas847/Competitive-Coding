// https://leetcode.com/problems/trapping-rain-water

class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        
        for(int i=0;i<height.size();i++){
            int lmax = 0;
            int rmax = 0;
            for(int j=0;j<=i;j++)
            {
                lmax = max(lmax,height[j]);
            }
            for(int j=i;j<height.size();j++)
            {
                rmax = max(rmax,height[j]);
            }
            ans = ans+min(lmax,rmax)-height[i];
        }
        return ans;
    }
};