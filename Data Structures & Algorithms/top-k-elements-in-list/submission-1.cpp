class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>r;
        for(auto i:nums){
            m[i]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>min_heap;
        for(auto i:m){
            min_heap.push({i.second,i.first});
            if(min_heap.size()>k)min_heap.pop();
        }
        vector<int>res;
        for(auto i=0;i<k;i++){
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return res;
    }
};
