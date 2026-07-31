class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size(),l2=nums2.size();
        int f;
        if((l1+l2)%2==0)f=0;//even
        else f=1;//odd
        int i=0,j=0;
        int c=ceil((l1+l2)/2);
        vector<int>v;
        while(i<l1 && j<l2){
            if(nums1[i]<=nums2[j])v.push_back(nums1[i++]);
            else v.push_back(nums2[j++]);
        }
        while(j<l2)v.push_back(nums2[j++]);
        while(i<l1)v.push_back(nums1[i++]);
        if(f==1)return v[c];
        else return (double)(v[c]+v[c-1])/2;

    }
};
