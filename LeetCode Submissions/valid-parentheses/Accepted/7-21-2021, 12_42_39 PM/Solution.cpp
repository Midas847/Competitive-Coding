// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
    char x;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            s.push(str[i]);
            continue;
        }
        else if (s.empty())
            return false;
        else if (str[i] == '}')
        {
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
            {
                return false;
                break;
            }
        }
        else if (str[i] == ')')
        {
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
            {
                return false;
                break;
            }
        }
        else if (str[i] == ']')
        {
            x = s.top();
            s.pop();
            if (x == '{' || x == '(')
            {
                return false;
                break;
            }
        }
    }
    return s.empty();
    }
};