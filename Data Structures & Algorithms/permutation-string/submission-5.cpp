class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m1;
        for(char ch:s1)m1[ch]++;
        int l1=s1.length(),l2=s2.length();
        unordered_map<char,int>m2;
        int i=0,j=0;
        while(j<l2){
            m2[s2[j]]++;
            if(m1==m2)return true;
            if(j-i+1 >= l1){
                m2[s2[i]]--;
                if(m2[s2[i]]==0)m2.erase(s2[i]);
                i++;
            }
            j++;
        }
        return false;
    }
};
