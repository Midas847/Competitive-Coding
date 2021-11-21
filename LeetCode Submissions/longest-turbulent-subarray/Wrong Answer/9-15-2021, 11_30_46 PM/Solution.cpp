// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int count = INT_MIN;
        int c = 0;
        bool t = false;
        if(arr.size()==1)
            return 1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] > arr[i+1]){
                c++;
                t=!t;
            }
            if(t && arr[i] < arr[i+1]){
                c++;
            }
        }
        return c;
    }
};