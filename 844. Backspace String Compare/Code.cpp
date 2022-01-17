class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string result1 = "", result2 = "";
        
        for(auto i: s) {
            if(i >= 'a' && i <= 'z') {
                result1 += i;
            }
            else if (!result1.empty()) {
                result1.pop_back();
            }
        }
        
        for (auto i: t) {
            if(i >= 'a' && i <= 'z') {
                result2 += i;
            }
            else if (!result2.empty()) {
                result2.pop_back();
            }
        }
        
        if (result1.compare(result2))
            return false;
        return true;
    }
};
