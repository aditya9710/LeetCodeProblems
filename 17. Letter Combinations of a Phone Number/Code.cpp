class Solution {
private: 
void dfs(string digits, vector<string>& result, unordered_map<char, string>& digits_to_char, int i, string& curr_string) {
    if (i == digits.size()) {
        result.push_back(curr_string);
        return;
    }
    
    for(auto c : digits_to_char[digits[i]]) {
        curr_string.push_back(c);
        dfs(digits, result, digits_to_char, i+1, curr_string);
        curr_string.pop_back();
    }

    return;
}

public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        unordered_map<char, string> digits_to_char = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        if (digits.empty()) return {};
        string curr_string = "";
        dfs(digits, result, digits_to_char, 0, curr_string);
        return result;
    }
};
