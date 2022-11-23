class Solution {
public:
    int help(vector<int>& v, int s, int e) {
        int rob1 = 0, rob2 = 0, temp = 0;
        for (int i = s; i <= e; i++) {
            temp = max(rob1 + v[i], rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }

    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        return max(help(nums, 0, nums.size()-2), help(nums, 1, nums.size()-1));
    }
};
