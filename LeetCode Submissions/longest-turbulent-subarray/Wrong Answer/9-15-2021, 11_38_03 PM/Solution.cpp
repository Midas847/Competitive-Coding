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
        int c1=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] < arr[i+1]){
                c1++;
                t=!t;
            }
            if(t && arr[i] > arr[i+1]){
                c1++;
            }
        }
        cout<<c<<" "<<c1<<"\n";
        count = max(c,c1);
        return count;
    }
};