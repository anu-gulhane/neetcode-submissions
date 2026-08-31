class Solution {
public:
    vector<vector<int>>res;
    void fun(vector<int>nums, int i, vector<int>temp){
        int n=nums.size();
        if(i==n){
            res.push_back(temp);
            return;
        }
        vector<int>temp2(temp);
        temp2.push_back(nums[i]);
        fun(nums,i+1,temp);
        fun(nums,i+1,temp2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        fun(nums,0,{});
        return res;
    }
};
