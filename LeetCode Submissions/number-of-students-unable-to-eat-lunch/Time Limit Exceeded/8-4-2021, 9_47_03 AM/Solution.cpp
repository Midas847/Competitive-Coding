// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch

class Solution {
public:
    stack<int> s;
    queue<int> q;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){

            s.push(sandwiches[i]);
        }
        while(!s.empty()){
            if(q.front()==s.top()){
                q.pop();
                s.pop();
            }
            else{
                int x = q.front();
                q.pop();
                q.push(x);
            }
        }
        return q.size();
    }
};