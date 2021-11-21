// https://leetcode.com/problems/largest-divisible-subset

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n==1)
            return nums;
        sort(nums.begin(),nums.end());
        vector<int> dp(n, 1);
        int maxEle = INT_MIN;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(nums[i]%nums[j] == 0){
                    int t = 1+dp[j];
                    if(t > dp[i])
                        dp[i] = t;
                }
            }
            if(dp[i] > maxEle)
                maxEle = dp[i];
        }
        vector<int> v;
        int prev = 0;
        for(int i=n-1;i>=0;i--){
            cout<<maxEle<<" ";
            if(dp[i] == maxEle && prev%nums[i] == 0){
                
                v.push_back(nums[i]);
                maxEle--;   
                prev = v.back();
            }
        }
        return v;
    }
};