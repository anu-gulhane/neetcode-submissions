class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=0;
        while(i<m && j<n){
            int l=j,r=n-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(matrix[i][mid]==target)return true;
                if(target<matrix[i][mid])r=mid-1;
                else l=mid+1;
            }
            i++;
            l=i,r=m-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(matrix[mid][j]==target)return true;
                if(target<matrix[mid][j])r=mid-1;
                else l=mid+1;
            }
            j++;
        }
        return false;
    }
};
