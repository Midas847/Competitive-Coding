// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int count = INT_MIN;
        int count1 = INT_MIN;
        int c = 0;
        if(arr.size()==1)
            return 1;
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
        int c1 = 0;
        for(int i=0;i<arr.size()-1;i++){
            if(i%2==0 && arr[i] > arr[i+1]){
                c1++;
            }
            else if(i%2!=0 && arr[i] < arr[i+1]){
                c1++;
            }
            else{
                count1 = max(count1,c1);
                c1 = 0;
            }
        }
        return max(count,count1)+1;
    }
};