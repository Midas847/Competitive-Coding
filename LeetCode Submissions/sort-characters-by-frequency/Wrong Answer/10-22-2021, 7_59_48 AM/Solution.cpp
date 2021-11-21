// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
public:
    string frequencySort(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++)
        {
            int index = s[i] - 'a';
            count[index]++;
        }
        sort(count.begin(),count.end(),greater<int>());
        string str;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<s.length();j++){
                int index = s[j] - 'a';
                if(count[index]==count[i]){
                    str +=s[j];
                    break;
                }
            }
            //cout<<count[i]<<endl;
        }
        return str;
    }
};