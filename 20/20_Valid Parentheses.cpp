class Solution {
public:
    bool isValid(string s) {
        if(s.empty())
            return true;
        stack<char> paren_stack;
        char paren;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                paren_stack.push(s[i]);
            }else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(paren_stack.empty())
                    return false;
                paren = paren_stack.top();
                paren_stack.pop();
                if((paren == '('&& s[i] == ')') || (paren == '['&& s[i] == ']') || (paren == '{'&& s[i] == '}') ){
                    ;
                }else{
                    return false;
                }
                
            }
        }
        if(paren_stack.empty())
            return true;
        else
            return false;
    }
};