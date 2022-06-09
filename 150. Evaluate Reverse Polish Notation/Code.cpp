class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        
        for(auto& c: tokens) {
            if(c == "+" || c == "-" || c == "/" || c == "*") {
                int a = stk.top();
                stk.pop();
                
                int b = stk.top();
                stk.pop();
                
                if (c == "+") {
                    stk.push(a + b);
                }
                else if (c == "-") {
                    stk.push(b - a);
                }
                else if (c == "*") {
                    stk.push(a * b);
                }
                else if (c == "/") {
                    stk.push(b/a);
                }
            }
            else {
                stk.push(stoi(c));
            }
        }
        return stk.top();
    }
};
