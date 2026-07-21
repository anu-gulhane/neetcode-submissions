class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(string word:strs){
            s+=to_string(word.size())+"^";
            s+=word;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int n=s.size(),i=0;
        while(i<n){
            string len="";
            while(s[i]>='0' && s[i]<='9'){
                len+=s[i];
                i++;
            }
            int l=stoi(len);
            i+=1;
            string word(s.begin()+i,s.begin()+i+l);
            res.push_back(word);
            i+=l;
        }
        return res;

    }
};
