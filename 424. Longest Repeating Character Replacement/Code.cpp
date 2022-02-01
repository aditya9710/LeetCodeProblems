class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int left = 0, ans = 0, maxCount = 0;
        
        for(int right = 0; right<s.length(); ++right) {
            maxCount = max(maxCount, ++count[s[right]]);
            while((right - left + 1) - maxCount > k)
                count[s[left++]]--; 
            ans = max(ans, right - left +1);
        }
        return ans;
    }
};
