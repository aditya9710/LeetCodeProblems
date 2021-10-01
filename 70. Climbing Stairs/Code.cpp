class Solution {
public:
    int climbStairs(int n) {
        if (n > 0 && n < 3) return n;
        vector<int> result{1,2};
        for(int i = 2; i < n; i++) {
            result.push_back(result[i - 1] + result[i - 2]);
        }
        return result.back();
    }
};
