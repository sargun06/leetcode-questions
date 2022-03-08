class LRUCache {
public:
    unordered_map<int, pair<list<int>::iterator, int>> m;
    list<int> dll;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
        dll.erase(m[key].first);
        dll.push_front(key);
        m[key].first=dll.begin();
        return m[key].second;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            m[key].second=value;
            dll.erase(m[key].first);
            dll.push_front(key);
            m[key].first=dll.begin();
        }
        else
        {
            dll.push_front(key);
            m[key]={dll.begin(),value};
            cap--;
        }
        if(cap<0)
        {
            m.erase(dll.back());
            dll.pop_back();
            cap++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */