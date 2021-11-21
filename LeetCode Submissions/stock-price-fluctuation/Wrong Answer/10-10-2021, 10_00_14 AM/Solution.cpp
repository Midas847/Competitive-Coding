// https://leetcode.com/problems/stock-price-fluctuation

class StockPrice {
public:
    map<int,int> m;
    stack<int> s;
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> p;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        m[timestamp] = price;
        s.push(timestamp);
        pq.push(price);
        p.push(price);
    }
    
    int current() {
        return m[s.top()];
    }
    
    int maximum() {
        return pq.top();
    }
    
    int minimum() {
        return p.top();
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */