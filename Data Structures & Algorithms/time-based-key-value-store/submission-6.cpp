class TimeMap {
public:
    unordered_map<int,unordered_map<string,string>>m;
    set<int>s;
    TimeMap() {
    }
    
    void set(string key, string value, int t) {
        unordered_map<string,string>mt=m[t];
        mt[key]=value;
        m[t]=mt;
        s.insert(t);
    }
    
    string get(string key, int t) {
        auto it = s.upper_bound(t);
        if (it == s.begin())
            return "";
        --it;
        while(true){
            t=*it;
            unordered_map<string,string>mt=m[t];
            if(mt.count(key)==0){
                if(it==s.begin())break;
                it--;
                continue;
            }
            return mt[key];
        }
        return "";
    }
};
