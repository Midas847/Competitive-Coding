// https://leetcode.com/problems/sort-array-by-parity-ii

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr(nums.size(),0);
        vector<int> evens,odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                evens.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        int te = 0;
        int to = 0;
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
                arr[i] = evens[te];
                te++;   
            }
            else{
                arr[i] = odd[to];
                to++;
            }
        }
        return arr;
    }
};