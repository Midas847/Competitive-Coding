// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int count = INT_MIN;
        int c = 0;
        for(int i=0;i<arr.size()-1;i++){
            if(i%2!=0 && arr[i] > arr[i+1]){
                c++;
            }
            else if(i%2==0 && arr[i] < arr[i+1]){
                c++;
            }
            else{
                count = max(count,c);
                c = 0;
            }
        }
        return count+1;
    }
};