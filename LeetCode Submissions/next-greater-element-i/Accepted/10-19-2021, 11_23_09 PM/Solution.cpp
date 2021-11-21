// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    v.push_back(j);
                    break;
                }
            }
        }
        vector<int> v1;
        for(auto x:v){
            int flag = 0;
            for(int j=x;j<nums2.size();j++){
                if(nums2[j] > nums2[x]){
                    v1.push_back(nums2[j]);
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
                v1.push_back(-1);
        }
        return v1;
    }
};