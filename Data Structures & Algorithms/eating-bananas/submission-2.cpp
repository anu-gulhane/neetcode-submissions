class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mink=1;
        int maxk=*max_element(piles.begin(),piles.end());
        int res=maxk;
        while(mink<=maxk){
            int midk=mink+(maxk-mink)/2;
            int curh=fun(midk, piles);
            if(curh<=h){
                res=midk;
                maxk=midk-1;
            }
            else mink=midk+1;
        }
        return res;
    }
    int fun(int midk, vector<int>piles){
        int c=0;
        int n=piles.size();
        int i=0;
        while(i!=n){
            c+=ceil((double)piles[i]/midk);
            i++;
        }
        return c;
    }
};
