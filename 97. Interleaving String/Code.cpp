class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if (s1.length() + s2.length() != s3.length())
            return false;

        vector<vector<bool>> dp (s1.length() + 1, vector<bool>(s2.length() + 1, false));

        dp[s1.length()][s2.length()] = true;

        for(int i = s1.length(); i >= 0; i--) {
            for (int j = s2.length(); j >= 0; j--) {
                if (i < s1.length() and s1[i] == s3[i+j] and dp[i+1][j])
                    dp[i][j] = true;
                else if (j < s2.length() and s2[j] == s3[i+j] and dp[i][j+1])
                    dp[i][j] = true;
            }
        }
        return dp[0][0];
    }
};
