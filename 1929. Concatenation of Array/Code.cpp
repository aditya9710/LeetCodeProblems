class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> conCatArray;
        for(int i = 0; i < 2 * nums.size(); i++) {
            if (i < nums.size()) {
                conCatArray.push_back(nums[i]);
            }
            else {
                conCatArray.push_back(nums[i - nums.size()]);
            }
        }
        return conCatArray;
    }
};
