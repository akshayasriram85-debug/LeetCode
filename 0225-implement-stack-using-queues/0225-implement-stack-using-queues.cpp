class MyStack {
public:
    queue<int> r1,r2;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!r1.empty()){
            r2.push(r1.front());
            r1.pop();
        }
        r1.push(x);
        while(!r2.empty()){
            r1.push(r2.front());
            r2.pop();
        }
    }
    
    int pop() {
        int res=r1.front();
        r1.pop();
        return res;
    }
    
    int top() {
        return r1.front();
    }
    
    bool empty() {
        return r1.empty();
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