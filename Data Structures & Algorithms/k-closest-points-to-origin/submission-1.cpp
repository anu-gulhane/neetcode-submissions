class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<
        pair<int,vector<int>>, 
        vector<pair<int,vector<int>>>,
        greater<pair<int,vector<int>>>
        >q;
        for(auto p:points){
            int d=((p[0]-0)*(p[0]-0)) + ((p[1]-0)*(p[1]-0));
            q.push({d,p});
        }
        vector<vector<int>>r;
        for(int i=0;i<k;i++){
            r.push_back((q.top()).second);
            q.pop();
        }
        return r;
    }
};
