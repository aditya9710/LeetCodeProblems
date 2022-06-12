class Solution {
public:
    void backtrack(int openN, int closedN, int n, string &str, vector<string> &ans) {
        if (openN == n && closedN == n) {
            ans.push_back(str);
            return;
        }
        if(openN < n) {
            backtrack(openN+1, closedN, n, str += "(", ans);
            str.erase(str.size() - 1);
        }
        if (closedN < openN) {
            backtrack(openN, closedN+1, n, str += ")", ans);
            str.erase(str.size()-1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str = "";
        backtrack(0, 0, n, str, ans);
        return ans;
    }    
};
