// https://leetcode.com/problems/kth-distinct-string-in-an-array

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        vector<string> v;
        for(auto x:m){
            if(x.second == 1)
               v.push_back(x.first);
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        reverse(v.begin(),v.end());
        
        if(v.size()<k)
            return "";
        return v[k-1];
    }
};