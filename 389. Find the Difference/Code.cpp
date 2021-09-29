class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = '\0';
        for(int i = 0; i < t.size(); i++) {
            result = result ^ s[i] ^ t[i];
        }
        return result;
    }
};
