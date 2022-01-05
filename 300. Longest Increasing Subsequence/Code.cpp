class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size();
        vector<int> LIS(nums.size(), 1);
        int mx = -1;
        for (int i = 1; i< nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    LIS[i] = max(LIS[i], 1 + LIS[j]);
                }
            }
            
            mx = max(mx, LIS[i]);
        }
        
        return mx;
    }
};
