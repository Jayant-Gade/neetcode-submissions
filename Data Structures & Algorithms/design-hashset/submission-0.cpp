class MyHashSet {
        vector<bool> existarr;
public:
    MyHashSet() {
       existarr.assign(1000001, false);
    }
    
    void add(int key) {
        existarr[key] = true;
    }
    
    void remove(int key) {
        if(existarr[key]==false){
            return;
        }
        else{
            existarr[key]=false;
        }
    }
    
    bool contains(int key) {
        if(existarr[key]==false){
            return false;
        }
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */