class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0 || coins.size() == 0) return 0;
        
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        
        for (int i = 0; i < coins.size(); i++) {
            for (int j = coins[i]; j < amount + 1; j++) {
                    dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
            }
        }
        return dp[amount] == amount+1? -1: dp[amount];
    }
};
