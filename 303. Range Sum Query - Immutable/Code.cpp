class NumArray {

private:
    vector <int> arr;
    
public:
    
    NumArray(vector<int>& nums) {
        arr.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) {
            arr.push_back(arr[i - 1] + nums[i]);
        }
        // for (int i : arr) {
        //     cout << i<< " ";
        // }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return arr[right];
        return arr[right] - arr[left - 1];
    }
};
