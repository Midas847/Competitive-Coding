// https://leetcode.com/problems/min-stack

class MinStack {
public:
    /** initialize your data structure here. */
    set<int> pq;
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        //pq.push(val);
        pq.insert(val);
    }
    
    void pop() {
        int x = s.top();
        s.pop();
        auto it = pq.find(x);
        pq.erase(it);       
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return *pq.begin();
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