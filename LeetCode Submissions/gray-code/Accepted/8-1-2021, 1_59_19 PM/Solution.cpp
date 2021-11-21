// https://leetcode.com/problems/gray-code

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> arr;
        for(int i=0;i<(1<<n);i++){
            int val = (i^(i>>1));
            arr.push_back(val);
        }
        return arr;
    }
};