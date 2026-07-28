class MinStack {
public:
        stack<int> q;
        stack<int> s;
    MinStack() {
    }
    
    void push(int val) {
        q.push(val);
        if(s.empty() || val<=s.top())s.push(val);
    }
    
    void pop() {
      if(q.top()==s.top())s.pop();
      q.pop();
        
    }
    
    int top() {
      return q.top();
    }
    
    int getMin() {
     return s.top();   
    }
};
