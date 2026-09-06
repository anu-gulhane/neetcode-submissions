class Solution {
public:
    vector<vector<int>>res;
    void fun(vector<int>nums, vector<int>ind, vector<int>r){
        if(ind.size()==0){
            res.push_back(r);
            return;
        }
for (int k = 0; k < (int)ind.size(); k++) {
            int i = ind[k];
            vector<int> indd(ind);
            indd.erase(indd.begin() + k);   // remove by position, not value
            vector<int> rr(r);
            rr.push_back(nums[i]);
            fun(nums, indd, rr);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ind;
        int n=nums.size();
        for(int i=0;i<n;i++)ind.push_back(i);
        fun(nums,ind,{});
        return res;
    }
};
