class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        double prev=-1;
        int c=0,l=pos.size();
        vector<vector<int>>v;
        for(int i=0;i<l;i++)v.push_back({pos[i],speed[i]});
        sort(v.begin(),v.end(),greater<vector<int>>());
        for(int i=0;i<l;i++){
          double cur=(double)(target-v[i][0])/v[i][1];
          if(cur>prev){
            prev=cur;
            c++;
          }
        }
        return c;
    }
};
