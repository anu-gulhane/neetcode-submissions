class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mt,ms;
        for(char c:t)mt[c]++;
        int l=s.length(),i=0,j=0,c=mt.size(),cc=0,mini=INT_MAX;
        string res;
        while(j<l){
          char ch=s[j];
          if(mt.count(ch)==0){
            j++;
            continue;
          }
          ms[ch]++;
          if(ms[ch]==mt[ch])cc++;
          while(c==cc){
            //valid window
            if(mini>j-i+1){
              mini=j-i+1;
              res=s.substr(i,j-i+1);
            }
            ch=s[i];
            if(mt.count(ch)==0)i++;
            else{
              ms[ch]--;
              if(ms[ch]<mt[ch])cc--;
              i++;
            }
          }
          j++;
        }
        return res;
    }
};
