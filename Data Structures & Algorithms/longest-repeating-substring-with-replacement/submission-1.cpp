class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,res=0,maxf=0,n=s.length();
        vector<int> v(26,0);
        for(int r=0;r<n;r++){
            v[s[r]-'A']++;
            maxf=max(maxf,v[s[r]-'A']);
            while((r+1-l)-maxf > k)v[s[l++]-'A']--;
            res=max(res,r+1-l);
        }
        return res;
    }
};
