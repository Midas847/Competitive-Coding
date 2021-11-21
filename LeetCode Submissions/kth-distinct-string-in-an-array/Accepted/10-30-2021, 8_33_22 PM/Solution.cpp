// https://leetcode.com/problems/kth-distinct-string-in-an-array

class Solution {
public:
    string kthDistinct(vector<string>& v, int k) {
        map<string,int> m;
        vector<string> arr;
        for(int i=0;i<v.size();i++)
            m[v[i]]++;
        for(auto x:m){
            if(x.second == 1)
                arr.push_back(x.first);
        }
        for(int i=0;i<v.size();i++){
            for(int j=0;j<arr.size();j++){
                if(v[i] == arr[j])
                    k--;
                if(k == 0)
                    return v[i];
            }
        }
        return "";
    }
};