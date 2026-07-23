class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=0;
        for(auto n:nums){
            if(!m[n]){
                m[n]=m[n-1]+m[n+1]+1;
                m[n-m[n-1]]=m[n];
                m[n+m[n+1]]=m[n];
                maxi=max(maxi,m[n]);
            }
        }
        return maxi;
    }
};
