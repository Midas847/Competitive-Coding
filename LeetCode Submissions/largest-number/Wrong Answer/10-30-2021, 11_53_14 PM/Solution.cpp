// https://leetcode.com/problems/largest-number

class Solution {
public:
    static bool cmp(string a,string b){
        string a1 = a + b;
        string b1 = b + a;
        return a1 > b1;
    }
    string largestNumber(vector<int>& nums) {
        string str = "";
        vector<string> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(to_string(nums[i]));
        }
        sort(arr.begin(),arr.end(),cmp);
        for(auto x:arr){
            str += x;
        }
        return str;
    }
};