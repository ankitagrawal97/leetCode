class MinStack {
public:
    stack<pair<int,int>> minstack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minstack.size()==0){
            minstack.push(pair<int,int> {val,val});
        }else{
            minstack.push(pair<int,int> {val,min(val,minstack.top().second)});
        }
    }
    
    void pop() {
        minstack.pop();
    }
    
    int top() {
       return minstack.top().first;
    }
    
    int getMin() {
        return minstack.top().second;
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