// https://leetcode.com/problems/range-frequency-queries

class RangeFreqQuery {
public:
    vector<int> v;
    map<int,int> m;
    RangeFreqQuery(vector<int>& arr) {
        v = arr;
        for(int i=0;i<v.size();i++)
            m[v[i]]++;
    }
    
    int query(int left, int right, int value) {
        /*for(int i=0;i<left;i++){
            if(v[i]==value)
                m[value]--;
        }
        if(right!=v.size()-1){  
            for(int i=right+1;i<v.size();i++){
                if(v[i]==value)
                    m[value]--;
            }
        }
        return m[value];*/
        int c = 0;
        for(int i=left;i<=right;i++){
            if(v[i]==value)
                c++;
        }
        return c;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */