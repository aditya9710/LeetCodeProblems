class Solution {
public:
vector<vector<string>> partition(string s) {
    vector<string> partition;
    vector<vector<string>> result;
    dfs(s, 0, partition, result);
    return result;
}

private:
    void dfs(string s, int start, vector<string>& partition, vector<vector<string>>& result) {
        if (start >= s.size()) {
            result.push_back(partition);
            return;
        }
        
        for (int i = start; i < s.size(); i++) {
            if (is_palindrome(s, start, i)) {
                partition.push_back(s.substr(start, i - start + 1));
                dfs(s, i + 1, partition, result);
                partition.pop_back();
            }
        }
    }

    bool is_palindrome(string s, int left , int right) {
        while(left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }   
};
