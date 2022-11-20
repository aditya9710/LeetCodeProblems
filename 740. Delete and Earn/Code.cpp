class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int, int> count;
        for (auto num: nums) count[num]++;
        
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int earn1 = 0, earn2 = 0, currEarn = 0, temp = 0;

        for(int i = 0; i < nums.size(); i++) {
            currEarn = nums[i]*count[nums[i]];

            // Can't use both earn2 and currEarn
            if(i > 0 and nums[i] == nums[i - 1] + 1) {
                temp = earn2;
                earn2 = max(currEarn + earn1, earn2);
                earn1 = temp;
            }
            else {
                temp = earn2;
                earn2 = currEarn + earn2;
                earn1 = temp;
            }
        }
        return earn2;
    }
};
