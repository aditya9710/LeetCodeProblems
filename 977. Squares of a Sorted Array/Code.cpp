class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        vector<int> result(nums.size());
        for (int i = r; i >= 0; i--) {
            // nums[i] = nums[i]*nums[i];
            result[i] = nums[l]*nums[l] >= nums[r]*nums[r] ? nums[l]*nums[l++]:nums[r]*nums[r--];
        }
        // sort(nums.begin(), nums.end());
        return result;
    }
};
