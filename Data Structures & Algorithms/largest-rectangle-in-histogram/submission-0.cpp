class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>l(n,0),r(n,0);
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[i]<=heights[s.top()])s.pop();
            if(s.empty())l[i]=-1;
            else l[i]=s.top();
            s.push(i);
        }
        while(!s.empty())s.pop();
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[i]<=heights[s.top()])s.pop();
            if(s.empty())r[i]=n;
            else r[i]=s.top();
            s.push(i);
        }
        int res=INT_MIN;
        for(int i=0;i<n;i++)res=max(res,heights[i]*(r[i]-l[i]-1));
        return res;
    }
};
