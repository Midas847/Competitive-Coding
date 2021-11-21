// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int c=1,c1=1,res=0;
        for(int i=1;i<arr.size();i++){
            if(i%2){
                if(arr[i-1]>arr[i])c++;
                else c=1;
            }
            else if(i%2==0){
                if(arr[i-1]<arr[i])c++;
                else c=1;
            }
            res = max(res,c);
        }
        for(int i=1;i<arr.size();i++){
            if(i%2==0){
                if(arr[i-1]>arr[i])c1++;
                else c1=1;
            }
            else if(i%2){
                if(arr[i-1]<arr[i])c1++;
                else c1=1;
            }
            res = max(res,c1);
        }
        return res;
    }
};