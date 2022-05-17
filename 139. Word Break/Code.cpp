class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[s.size()] = true;
        
        for(int i = s.size()-1; i >= 0; i--) {
            for(auto w: wordDict) {
                // cout<<s[i]<<": "<<w<<endl;
                // cout<<i<<"+"<<w.size()<<"<="<<s.size()<<endl;
                // cout<<s.substr(i, i + w.size())<<endl;
                if (i + w.size() <= s.size() && s.substr(i, w.size()) == w) {
                    dp[i] = dp[i+w.size()];                    
                    // cout<<s.substr(i, i+w.size())<<"\t Here\n";
                }
                if (dp[i]){
                    // cout<<"Now\n";
                    break;
                }
            }
        }
        return dp[0];
    }
};
