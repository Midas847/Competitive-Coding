// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        int count[27];
        int n = s.length();
        // build char count bucket : <charIndex, count>
        for (int i = 0; i < n; i++) {            
            int index = s[i] - 'a';
            count[index]++;
        }
        
        // find the index
        for (int i = 0; i < n; i++) {
            int index = s[i] - 'a';
            cout<<count[index]<<endl;
            if (count[index] == 1) {
                return i;
            }
                
        }
        return -1;
    }
};