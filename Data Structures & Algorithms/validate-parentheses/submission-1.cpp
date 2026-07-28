class Solution {
public:
    bool isValid(string ss) {
        stack<char>s;
        for(char c:ss){
          if(c=='(' || c=='{' || c=='[')s.push(c);
          else{
            if(s.empty())return false;
            switch(c){
              case ')':
                if(s.top() == '(')s.pop();
                else return false;
                break;
              case '}':
                if(s.top() == '{')s.pop();
                else return false;
                break;
              case ']':
                if(s.top() == '[')s.pop();
                else return false;
                break;
              default:return false;
            }
          }
        }
        if(s.empty())return true;
        return false;
    }
};
