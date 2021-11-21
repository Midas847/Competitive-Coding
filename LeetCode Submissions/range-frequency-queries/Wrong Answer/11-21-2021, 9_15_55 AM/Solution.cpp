// https://leetcode.com/problems/range-frequency-queries

class RangeFreqQuery {
public:
    vector<int> arr;
    map<int,int> m;
    RangeFreqQuery(vector<int>& arr) {
        arr = arr;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
    }
    
    int query(int left, int right, int value) {
        if(m[left] == 0 && m[right] == 0)
            return m[value];
        else if(m[right] && m[left]){
            for(int i=0;i<arr.size();i++){
                if(arr[i] == left){
                    break;
                }
                if(arr[i] == value){
                    m[value]--;
                }
            }
            for(int i=arr.size()-1;i>=0;i--){
                if(arr[i] == right){
                    break;
                }
                if(arr[i] == value){
                    m[value]--;
                }
            }
            return m[value];
        }
        else if(m[left]){
            for(int i=0;i<arr.size();i++){
                if(arr[i] == left){
                    break;
                }
                if(arr[i] == value){
                    m[value]--;
                }
            }
            return m[value];
        }
        else if(m[right]){
            for(int i=arr.size()-1;i>=0;i--){
                if(arr[i] == right){
                    break;
                }
                if(arr[i] == value){
                    m[value]--;
                }
            }
            return m[value];
        }
        return -1;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */