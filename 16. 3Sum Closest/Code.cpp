class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff = INT_MAX, ans = 0;
        for(int i=0; i<nums.size();i++) {
            int firstEl = nums[i], start = i+1, end = nums.size()-1;
            while(start<end) {
                if (firstEl + nums[start] + nums[end] == target) return target;
                else if (abs(firstEl + nums[start] + nums[end] - target) < diff) {
                    diff = abs(firstEl + nums[start] + nums[end] - target);
                    ans = firstEl + nums[start] + nums[end];
                }
                if (firstEl + nums[start] + nums[end] > target) end--;
                else start++;
            }
        }
        return ans;
    }
};
