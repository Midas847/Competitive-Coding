// https://leetcode.com/problems/decode-the-slanted-ciphertext

class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int sz = encodedText.size();
        string res;
        int columns = sz/rows;
        for(int i=0;i<columns;i++){
            for(int j=i;j<sz;j += columns+1){
                res += encodedText[j];
            }
        }
       while(!res.empty() && isspace(res.back()))
            res.pop_back();
        return res;
    }
};