class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // if (s.length() <= 1) return s.length();
        unordered_map <char, int> mp;
        
        int l = 0, r = 0, cnt = 0, ans = 0;
        while (r < s.length()) {
        
            if (mp[s[r]] == 0)
            {
                cnt = r - l + 1;
                ans = max(cnt, ans);
                mp[s[r]]++;
                r++;
            }
            else {
                mp[s[l]]--;
                l++;
            }
            
        }
        return ans;
    }
};
