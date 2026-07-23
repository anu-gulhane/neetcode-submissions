class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> mini(n,0), maxi(n,0);
        mini[0]=prices[0];
        for(int i=1;i<n;i++){
            mini[i]=min(mini[i-1],prices[i]);
        }
        maxi[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            maxi[i]=max(maxi[i+1],prices[i]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,maxi[i]-mini[i]);
        }
        return res;
    }
};
