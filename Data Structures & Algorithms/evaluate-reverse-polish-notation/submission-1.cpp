class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto i:tokens){
          try{
            int n=stoi(i);
            s.push(n);
          }
          catch(exception e){
            int a=s.top();s.pop();
            int b=s.top();s.pop();
            switch((char)((i[0]))){
              case '+':s.push(a+b);break;
              case '-':s.push(b-a);break;
              case '*':s.push(a*b);break;
              case '/':s.push(b/a);break;
            }
          }
        }
        return s.top();
    }
};
