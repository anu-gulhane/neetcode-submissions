class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        priority_queue<pair<int,int>> q;
        int l=nums.size();
        for(int i=0;i<k;i++)q.push({nums[i],i});
        pair<int,int>p=q.top();
        res.push_back(p.first);
        for(int i=k;i<l;i++){
          while(true){
            if(q.empty())break;
            pair<int,int>p=q.top();
            if(p.second <= i-k)q.pop();
            else break;
          }
          q.push({nums[i],i});
          pair<int,int>p=q.top();
          res.push_back(p.first);
        }
        return res;
    }
};
