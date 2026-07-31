class Solution {
public:
    int findMin(vector<int> &arr) {
        int n=arr.size();
        int l=0,r=n-1;
        int res=INT_MAX;
        while(l<=r){       
            int mid=l+(r-l)/2;
            // cout<<l<<" "<<mid<<" "<<r<<" ";
            if(arr[l]<=arr[mid]){
                //left sorted
                res=min(res,arr[l]);
                // cout<<l<<endl;
                l=mid+1;
            }
            else{
                //right sorted
                res=min(res,arr[mid]);
                // cout<<r<<endl;
                r=mid-1;
            }
        }
        return res;
    }
};
