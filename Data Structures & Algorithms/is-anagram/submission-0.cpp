class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int>ms, mt;
        for(auto ch:s)ms[ch-'a']++;
        for(auto ch:t)mt[ch-'a']++;
        return ms==mt;
    }
};
