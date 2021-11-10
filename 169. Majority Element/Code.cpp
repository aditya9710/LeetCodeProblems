class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int prev = nums[0];
        int result;
        if (nums.size() < 2) return nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == prev) {
                count += 1;
                
                if (count >= nums.size()/2)
                    result = nums[i];
            }
            else {
                prev = nums[i];
                count = 0;
            }
        }
        return result;
    }
};
