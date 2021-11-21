// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string multiply(string num1, string num2) {
        int x = stoi(num1) * stoi(num2);
        return to_string(x);
    }
};