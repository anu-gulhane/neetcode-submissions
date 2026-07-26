class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1;
        for(char ch:s1)m1[ch]++;
        int l1=s1.length(),l2=s2.length();
        
        for(int i=0;i<l2-l1+1;i++){
            unordered_map<char,int>m2;
            int f=0;
            for(int j=i;j<i+l1;j++){
                char ch=s2[j];
                if(m1.count(ch)==0){
                    f=1;
                    break;
                }
                if(m2[ch]>=m1[ch]){
                    f=1;
                    break;
                }
                m2[ch]++;
            }
            if(f==0 && m1==m2)return true;
        }
        return false;
    }
};
