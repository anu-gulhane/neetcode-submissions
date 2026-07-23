class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            while(!isalnum(s[i]))i++;
            while(!isalnum(s[j]))j--;
            if(i>=j)return true;
            if(tolower(s[i])!=tolower(s[j])){
                // cout<<i<<" "<<j;
                return false;
            }
                
            i++;
            j--;
        }
        return true;
    }
};
