// https://leetcode.com/problems/min-stack

class MinStack {
public:
    /** initialize your data structure here. */
    priority_queue <int, vector<int>, greater<int> > pq;
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        pq.push(val);
    }
    
    void pop() {
        s.pop();
        pq.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return pq.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */