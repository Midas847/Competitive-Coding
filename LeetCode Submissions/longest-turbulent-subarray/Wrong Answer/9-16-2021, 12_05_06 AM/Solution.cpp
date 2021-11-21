// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int flag = 0;
        int c = 0;
        int count  = INT_MIN;
        if(arr.size()==1)
            return 1;
        for(int i=0;i<arr.size()-1;i++){
            if(i%2!=0 && arr[i] > arr[i+1]){
                c++;
            }
            else if(i%2==0 && arr[i] < arr[i+1]){
                c++;
            }
        }
        int c1=0;
        for(int i=0;i<arr.size()-1;i++){
            if(i%2==0 && arr[i] > arr[i+1]){
                c1++;
            }
            else if(i%2!=0 && arr[i] < arr[i+1]){
                c1++;
            }
        }
        count = max(c,c1);
        return count+1;
    }
};