class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>pre,post(n,0);
        for(int i=0;i<n;i++){
            if(i==0)pre.push_back(1);
            else pre.push_back(nums[i-1]*pre[i-1]);
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1)post[i]=1;
            else post[i]=nums[i+1]*post[i+1];
        }
        vector<int>res(n);
        for(int i=0;i<n;i++)res[i]=pre[i]*post[i];
        return res;
    }
};
