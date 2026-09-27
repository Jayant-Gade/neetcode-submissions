class MyHashMap {
    vector<int> valarr;
    vector<bool> existarr;
    vector<int> keyarr;
    int i;
public:
    MyHashMap() {
        keyarr.assign(1000001,0);
        existarr.assign(1000001,false);
        i=0;
    }
    
    void put(int key, int value) {
        keyarr[key]=i;
        existarr[key]=true;
        valarr.push_back(value);
        i++;
    }
    
    int get(int key) {
        if(existarr[key]==true){
            return valarr[keyarr[key]];
        }
        return -1;
    }
    
    void remove(int key) {
        existarr[key] = false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */