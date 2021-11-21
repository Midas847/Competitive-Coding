// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    if(j==nums2.size()-1)
                        v.push_back(-1);
                    else if(nums2[j+1] > nums2[j])
                        v.push_back(nums2[j+1]);
                    else
                        v.push_back(-1);
                }
            }
        }
        return v;
    }
};