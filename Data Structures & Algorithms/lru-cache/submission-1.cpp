class LRUCache {
public:
    int maxi;
    unordered_map<int,pair<int,list<int>::iterator>>m;
    list<int>l;
    LRUCache(int capacity) {
        maxi=capacity;
    }
    
    int get(int key) {
        if(m.count(key)==0)return -1;
        l.erase(m[key].second);
        l.push_back(key);
        m[key].second=--l.end();
        return m[key].first;
    }
    
    void put(int key, int value) {
        if(m.contains(key)){
            //true
            l.erase(m[key].second);
        }
        else if(l.size()>=maxi){
            //overload, remove lru
            m.erase(l.front());
            l.pop_front();
        }
        l.push_back(key);
        m[key]={value,--l.end()};
    }
};
