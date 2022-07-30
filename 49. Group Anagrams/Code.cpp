class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        int n = strs.size();
        string tmp;
        
        for(int i = 0; i < n; i++) {
            tmp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(tmp);
        }
        
        vector<vector<string>> result;    
        for(auto itr = mp.begin(); itr != mp.end(); itr++) {
            result.push_back(itr->second);
        }    
        return result;
    }
};
