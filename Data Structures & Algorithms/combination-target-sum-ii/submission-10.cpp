class Solution {
public:
    set<vector<int>>res;
    int tar,n;
    void fun(vector<int>nums, int i, int sum, vector<int>temp){
        if(sum==tar){
            res.insert(temp);
            return;
        }
        if(i==n || sum>tar)return;
        for(int j=i;j<n;j++){
            if(j>i && nums[j]==nums[j-1])continue;
            if(sum+nums[j]>tar)break;
            temp.push_back(nums[j]);
            fun(nums,j+1,sum+nums[j],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        tar=target;
        n=nums.size();
        fun(nums,0,0,{});
        return vector<vector<int>>(res.begin(),res.end());
    }
};
