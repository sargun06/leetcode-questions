class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;

    MinStack() {
    }                                                       
    int m=INT_MAX;                                          
    
    void push(int val) {
        if(m>=val)
        {
            st.push(m);
            m=val;
        }
        st.push(val);
    }
    
    void pop() {
        if(m==st.top())
        {
            st.pop();
            m=st.top();
            st.pop();
        }
        else
            st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m;
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