class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(nums.at(nums.at(i)));
        }
        
        for (auto ir = ans.begin(); ir != ans.end(); ++ir) {
            cout << *ir << " ";
        }
        return ans;
    }
};