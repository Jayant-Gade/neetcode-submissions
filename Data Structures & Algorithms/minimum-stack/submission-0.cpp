class MinStack {
public:
    int i=-1;
    deque<int> store,mindata;
    MinStack() {
    }
    
    void push(int val) {
        if(i==-1){
            store.push_back(val);
            mindata.push_back(val);
        }
        else{
            store.push_back(val);
            mindata.push_back(min(mindata[i],val));
        }
        i++;
    }
    
    void pop() {
        store.pop_back();
        mindata.pop_back();
        i--;
    }
    
    int top() {
        return store[i];
    }
    
    int getMin() {
        return mindata[i];
    }
};
