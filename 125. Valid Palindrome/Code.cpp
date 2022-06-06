class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() < 2) return true;
        
        int l = 0, r = s.length() - 1;
        
        while(l < r) {
            
            while (l<r && !alphaNum(s[l])) {
                l++;
            }
            
            while (r>l && !alphaNum(s[r])) {
                r--;
            }
            if (tolower(s[l]) != tolower(s[r])) return false;
            l++; r--;
        }
        
        return true;
    }
                
    bool alphaNum(char c) {
        return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0'<= c&& c <= '9');
    }
};
