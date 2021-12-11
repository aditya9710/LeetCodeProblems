class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid, left = 0, right = nums.size() - 1;
        if (left == right) return target == nums[0] ? 0:-1;
        while(left <= right) {
            mid = left + (right - left)/2;
            // cout<<"left: "<<left;
            // cout<<"\tmid: "<<mid;
            // cout<<"\tright: "<<right<<endl;
            if (target == nums[mid])
                return mid;
            else if (target > nums[mid])
                left = mid + 1;
            else if (target < nums[mid])
                right = mid;
            if(left == mid && right == mid) break;
        }
        return -1;
    }
};
