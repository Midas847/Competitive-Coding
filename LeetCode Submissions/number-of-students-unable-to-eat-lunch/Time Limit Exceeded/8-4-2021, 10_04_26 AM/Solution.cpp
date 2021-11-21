// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch

class Solution {
public:
    stack<int> s;
    deque<int> q;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        for(int i=0;i<students.size();i++){
            q.push_back(students[i]);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){

            s.push(sandwiches[i]);
        }
        while(!q.empty()){
            if(q.front()==s.top()){
                q.pop_front();
                s.pop();
            }
            else{
            
                int x = q.front();
                q.pop_front();
                q.push_back(x);
            }
        }
        /*while(!q.empty()){
            cout<<q.front();
            q.pop_front();
        }*/
        return q.size();
    }
};