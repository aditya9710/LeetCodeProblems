class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) return s;
        int maxLen = 1;
        int start = 0, end = 0;
        
        // Odd Length
        for(int i = 0; i<s.length() - 1; i++) {
            int l = i, r = i;
            while(l >= 0 && r<s.length()){
                if (s[l]==s[r]) {
                  l--;
                  r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if (len > maxLen) {
                maxLen = len;
                start = l+1;
                end = r-1;
            }
        }
        
        // Even Length
        for(int i = 0; i<s.length() - 1; i++) {
            int l = i, r = i+1;
            while(l >= 0 && r<s.length()){
                if (s[l]==s[r]) {
                  l--;
                  r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if (len > maxLen){
                maxLen = len;
                start = l+1;
                end = r-1;
            }
        }
        
        return s.substr(start, maxLen);
    }
};
