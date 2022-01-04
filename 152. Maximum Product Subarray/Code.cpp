class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() < 1) return 0;
        
        int currMinProduct = 1, currMaxProduct = 1, ans = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            int temp = currMaxProduct * nums[i];
            currMaxProduct = max(max(temp, currMinProduct * nums[i]), nums[i]);
            currMinProduct = min(min(temp, currMinProduct * nums[i]), nums[i]);
            ans = max(ans, currMaxProduct);
        }
        return ans;
    }
};
