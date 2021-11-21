// https://leetcode.com/problems/range-frequency-queries

class RangeFreqQuery {
public:
    vector<int> v;
    map<int,vector<int>> m;
    RangeFreqQuery(vector<int>& arr) {
        v = arr;
        for(int i=0;i<v.size();i++)
            m[v[i]].push_back(i);
    }
    
    int query(int left, int right, int value) {
        return upper_bound(begin(m[value]),end(m[value]),right) - lower_bound(begin(m[value]),end(m[value]),left);
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */