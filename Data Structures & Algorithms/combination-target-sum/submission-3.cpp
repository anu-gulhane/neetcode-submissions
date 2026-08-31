class Solution {
public:
    vector<vector<int>>res;
    int target;
    void fun(vector<int>nums, vector<int>temp, int sum, int ii){
        int n=nums.size();
        if(sum==target){
            res.push_back(temp);
            return;
        }
        for(int i=ii;i<n;i++){
            if(sum+nums[i]>target)continue;
            vector<int>temp2(temp);
            temp2.push_back(nums[i]);
            fun(nums,temp2,sum+nums[i], max(i,ii));
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        this->target=target;
        fun(nums,{},0,0);
        return res;
    }
};
