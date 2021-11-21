// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>::iterator it, st;
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> v(n1 + n2);
        vector<int> v1;
        it = set_intersection(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(),v.begin());
        for (st = v.begin(); st != it; ++st){
            if(*st!=0)
                v1.push_back(*st);
        }
        return v1;
    }
};