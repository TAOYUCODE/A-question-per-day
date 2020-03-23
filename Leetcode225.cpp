class MyStack {
public:
    queue<int> q;
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = q.size() - 1;
        while (x--) {
            q.push(q.front());
            q.pop();
        }
        x = q.front();
        q.pop();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        int x = q.size() - 1;
        while (x--) {
            q.push(q.front());
            q.pop();
        }
        x = q.front();
        q.push(q.front());
        q.pop();
        return x;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};
