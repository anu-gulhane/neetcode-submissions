class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,n=s.length();
        int maxi=0;
        map<char,int>m;
        while(j<n){
            char ch=s[j];
            if(m.count(ch)==0){
                m[ch]=j++;
                maxi=max(maxi,(int)m.size());
            }
            else{
                int k=m[ch];
                for(int in=i;in<=k;in++){
                    m.erase(s[in]);
                }
                i=k+1;
            }
        }
        return maxi;
    }
};
