// https://leetcode.com/problems/implement-stack-using-queues

class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1,q2;
    int curr_size;
    MyStack() {
        curr_size = 0;
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        curr_size++;
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.empty())
            return true;
        return (q1.front());
        q1.pop();
        curr_size--;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */