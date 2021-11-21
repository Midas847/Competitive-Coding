// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        char x;
        stack<char> st;
        for(int i=0;i<len;i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                st.push(s[i]);
                continue;
            }
            else if(st.empty())
                return false;
            else if(s[i]=='}'){
                x = st.top();
                st.pop();
                if(x=='('||x=='['){
                    return false;
                    break;
                }
            }
            else if(s[i]==')'){
                x = st.top();
                st.pop();
                if(x=='{'||x=='['){
                    return false;
                    break;
                }
            }
            
            else if(s[i]==']'){
                x = st.top();
                st.pop();
                if(x=='('||x=='{'){
                    return false;
                    break;
                }
            }
        }
        return st.empty();
    }
};