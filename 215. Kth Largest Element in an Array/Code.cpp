class Solution {
public:
    int quickSelect(int l, int r, vector<int>& nums, int k) {
        int pivot = nums[r], p = l, temp;

        for (int i = l; i < r; i++) {
            if (nums[i] <= pivot) {
                temp = nums[i];
                nums[i] = nums[p];
                nums[p] = temp;
                p++;
            }
        }
        temp = nums[r];
        nums[r] = nums[p];
        nums[p] = temp;

        if (p > k) return quickSelect(l, p - 1, nums, k);
        else if (p < k) return quickSelect(p + 1, r, nums, k);
        else return nums[p];
    }

    int findKthLargest(vector<int>& nums, int k) {
        k = nums.size() - k;
        return quickSelect(0, nums.size() - 1, nums, k);
    }
};
