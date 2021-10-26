class NumArray {

private:
    vector <int> arr;
    
public:
    
    NumArray(vector<int>& nums) {
        for(int i : nums) {
            arr.push_back(i);
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i = left; i <= right && i >= 0; i++) {
            sum += arr[i];
        }
        return sum;
    }
};
