// https://leetcode.com/problems/count-vowel-substrings-of-a-string

class Solution {
public:
    bool isVowel(char ch){
        return(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    int countVowelSubstrings(string word) {
        if(word.size() < 5)
            return 0;
        int c = 0;
        for(int i=0;i<=word.size()-5;i++){
            unordered_map<char,int> m;
            for(int j=i;j<word.size();j++){
                if(!isVowel(word[j]))
                    break;
                else{
                    m[word[j]]++;
                    if(m.size() == 5)
                        c++;
                }
            }
        }
        return c;
    }
};