class Solution {
public:
    int searchMin(vector<int>& nums, int l, int r) {
        if (l == r) return nums[l];
        int mid = l + (r - l)/2;
        if (nums[mid] > nums[r]) return searchMin(nums, mid+1, r);
        else if (nums[mid] < nums[r]) return searchMin(nums, l, mid);
        return nums[r];
    }
    
    int findMin(vector<int>& nums) {
        return searchMin(nums, 0, nums.size()-1);
    }
};
