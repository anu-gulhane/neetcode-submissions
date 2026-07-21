class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>r;
        for(auto i:nums){
            m[i]++;
        }
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(), v.end(), [](const auto &a, const auto &b){
            return a.second>b.second;
        });
        for(int i=0;i<k;i++)r.push_back(v[i].first);
        return r;
    }
};
