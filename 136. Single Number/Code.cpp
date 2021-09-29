//Explanation using [4,1,2,1,2]

// input
// 4 -> 100
// 1 -> 001
// 2 -> 010
// 1 -> 001
// 2 -> 010

// for loop current result
// intial ->result = 0
// i=0 -> result = 4 = 100
// i=1 -> result = 5 = 101
// i=2 -> result = 7 = 111
// i=3 -> result = 6 = 110
// i=4 -> result = 4 = 100

//returns 4

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result = result ^ nums[i];
        }
        return result;
    }
};
