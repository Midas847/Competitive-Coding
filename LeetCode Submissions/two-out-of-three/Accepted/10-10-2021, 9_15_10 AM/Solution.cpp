// https://leetcode.com/problems/two-out-of-three

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> v;
        for(int i=1;i<=100;i++){
            int flag = 0;
            for(int j=0;j<nums3.size();j++){
                if(nums3[j]==i){
                    flag++;
                    break;
                }
            }
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==i){
                    flag++;
                    break;
                }
            }
            for(int j=0;j<nums1.size();j++){
                if(nums1[j]==i){
                    flag++;
                    break;
                }
            }
            if(flag>1)
                v.push_back(i);
        }
        return v;
    }
};