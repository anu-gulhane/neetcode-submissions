class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i=1;i<n;i++)if(nums[i]==nums[i-1])return true;
        // return false;

        int n=nums.size();
        unordered_set <int> seen (nums.begin(), nums.end());
        if(seen.size()==nums.size())return false;
        return true;
    }
};