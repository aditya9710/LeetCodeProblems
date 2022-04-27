class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        unordered_map<char, int> s_map, t_map;
        
        for (auto c: s)
            s_map[c] += 1;
        for (auto c: t)
            t_map[c] += 1;
        
        for (auto i: s_map) {
            if (i.second != t_map[i.first])
                return false;
        }
        return true;
    }
};
