/*Algorithm
Idea is to use an extra stack for storing the min value in every state.
*/
class MinStack {
public:
    /** initialize your data structure here. */
   stack<int> s;
    stack<int> minstack;
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        if(minstack.empty()){
            minstack.push(x);
        }else{
            
            if(minstack.top()>s.top()){
            minstack.push(s.top());
            }else{
                minstack.push(minstack.top());
            }
        }
    }
    
    void pop() {
        minstack.pop();
		s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */