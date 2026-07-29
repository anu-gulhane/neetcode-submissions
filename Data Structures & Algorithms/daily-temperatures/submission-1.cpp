class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        stack<pair<int,int>>s;
        int l=tmp.size();
        vector<int>res (l,0);
        for(int i=l-1;i>=0;i--){
          if(s.empty()){
            res[l-i-1]=0;
            s.push({tmp[i],i});
            continue;
          }
          pair<int,int>p=s.top();
          if(tmp[i]>=p.first){
            while(tmp[i]>=p.first){
              s.pop();
              if(s.empty())break;
              p=s.top();
            }
            if(s.empty())res[i]=0;
            else res[i]=p.second-i;
            s.push({tmp[i],i});
            continue;
          }
          else{
             res[i]=p.second-i;
             s.push({tmp[i],i});
             continue;
          }
        }
        return res;
    }
};
