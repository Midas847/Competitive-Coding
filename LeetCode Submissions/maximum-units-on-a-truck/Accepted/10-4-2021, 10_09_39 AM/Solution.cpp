// https://leetcode.com/problems/maximum-units-on-a-truck

class Solution {
public:
    static bool sortbysec(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        sort(arr.begin(),arr.end(),sortbysec);
        int count = 0;
        int res = 0;
        for(int i=0;i<arr.size();i++){
            //cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
            if(count+arr[i][0] <= truckSize){
                count+=arr[i][0];
                res += (arr[i][0]*arr[i][1]);
                //cout<<res<<"\n";
            }
            else{
                int rem = (truckSize - count);
                //cout<<rem<<"\n";
                res += rem*arr[i][1];
                break;
            }
        }
        return res;
    }
};