class Solution {
    public:

    bool isValid(string s) {

        stack<int> stk;
        int n = s.size();

        for(int i = 0; i < n ; i++  ) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
                continue;
            }

            if(stk.empty()) {
                return false; 
            }

            char top = stk.top();
            if (top == '(' && s[i] != ')') {
                return false;
            }else if (top == '{' && s[i] != '}') {
                return false;
            }else if (top == '[' && s[i] != ']') {
                return false;
            } else {
                stk.pop();
            }
        }
        
        if(stk.empty()) {
            return true; 
        }

        return false;
    }
};
