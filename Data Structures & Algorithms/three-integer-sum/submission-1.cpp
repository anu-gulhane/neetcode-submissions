class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[j]+nums[k]+nums[i];
                if(sum==0){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                    j++;
                    k--;
                }
                else if(sum<0)j++;
                else k--;
            }
        }
        return vector<vector<int>>(s.begin(),s.end());
    }
};
