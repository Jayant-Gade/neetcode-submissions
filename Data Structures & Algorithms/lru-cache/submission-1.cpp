class LRUCache {
    list<pair<int,int>> cache;
    int size;
    int currsize=0;
    map<int,list<pair<int,int>>::iterator> cachemap;
public:
    LRUCache(int capacity) {
        size=capacity;
    }
    
    int get(int key) {
        if(cachemap.find(key)==cachemap.end()){
            return -1;
        }
        else{
            cache.splice(cache.end(),cache,cachemap[key]);
        }
        return cachemap[key]->second;
    }
    
    void put(int key, int value) {
        if(cachemap.find(key)==cachemap.end()){
            if(size==currsize){
                cachemap.erase(cache.begin()->first);
                cache.pop_front();
                currsize--;
            }
            cache.push_back({key,value});
            cachemap[key]=--cache.end();
            currsize++;
        }
        else{
            cache.erase(cachemap[key]);
            cache.push_back({key,value});
            cachemap[key]=--cache.end();
        }
    }
};
