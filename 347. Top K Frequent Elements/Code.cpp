class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> count;
        unordered_map<int, std::vector<int>> freq;
        std::vector<int> ans;
        
        for(int i = 0; i<nums.size(); i++) {
            count[nums[i]]++;
        }
        
        for (auto& [num, c] : count) {
            freq[c].push_back(num);
        }
        
        for (int i = nums.size(); k >= 1 && i >= 1; --i) {
            if (freq.find(i) != freq.end()) {
                std::copy(freq[i].begin(), freq[i].end(), std::back_inserter(ans));
                k -= freq[i].size();
            }
        }
        return ans;
    }
};
